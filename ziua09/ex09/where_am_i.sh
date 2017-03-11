var=$(ifconfig | grep "inet " | grep -v " 127." | cut -d' ' -f2)
if test -z "$var"
then
		printf "Je suis perdu!\n"
	else
			echo $var | tr ' ' '\n'
fi
