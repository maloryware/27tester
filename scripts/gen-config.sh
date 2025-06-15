#!/bin/bash
CONFIG=$1

cat << EOF > $CONFIG
	[OPTIONS]
	use_remotes=
	[REMOTES]
	default=https://github.com/maloryware/27tester-tests
EOF

SUCCESS=0
while [ "$SUCCESS" != 1 ]
do
	read -r -p "Download default tests? (y/n) " INPUT
	case $INPUT in
		[Yy]* )
			echo "Downloading default tests."
			SUCCESS=1
			;;
		[Nn]* )
			echo "Not downloading default tests."
			SUCCESS=1
			;;
		* )
			echo "ERR: Please select a valid option."
			;;
	esac
done
# sed -i -E "s/(.*=)(.*)/\1 /g"