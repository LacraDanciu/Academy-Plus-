if [ $# -eq 1 ]; then
	cat $1 | grep -i "Nicolas\tBomber" | awk -F'\t' '{print $3}' | awk -F'[^0-9]*' '$1'
fi
