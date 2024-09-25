#!/bin/bash

diff1000=$(ls 1000/ -1 | wc -l)
diff900=$(ls 900/ -1 | wc -l)
diff800=$(ls 800/ -1 | wc -l)

average=$(echo "scale=2; (1000 * $diff1000 + 900 * $diff900 + 800 * $diff800) / ($diff1000 + $diff900 + $diff800)" | bc)

echo "1000 difficulty problems solved: $diff1000"
echo "900 difficulty problems solved: $diff900"
echo "800 difficulty problems solved: $diff800"
echo "Average difficulty : $average"
