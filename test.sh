#!/bin/bash

FILES=$(ls -r mouli_maps)

for file in ${FILES}; do
    printf "%-70b" "\033[34mChecking ${file}...\033[m "
    TIME=$({ TIMEFORMAT="%U"; time ./bsq mouli_maps/${file}; } 2>&1 >temp)
    if [ $(diff temp mouli_maps_solved/${file} | wc -l) -eq 0 ]; then
        printf "%-14b" "\033[32mOK\033[m"
    else
        echo -e -n "\033[31mFAILED\033[m"
    fi
    echo -e " \033[34m(${TIME}s)\033[m"
done

rm -f temp
