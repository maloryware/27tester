#!/bin/bash
CONFIG=$1
TARGET=$2
DIRECTORY=$3

SUCCESS=0
while [ "$SUCCESS" != 1 ]
do
	read -r -p "Download default tests? (y/n) " INPUT
	case $INPUT in
		[Yy]* )
			echo "Downloading default tests."
			USE_DEFAULTS=true
			SUCCESS=1
			;;
		[Nn]* )
			echo "Not downloading default tests."
			USE_DEFAULTS=false
			SUCCESS=1
			;;
		* )
			echo "ERR: Please select a valid option."
			;;
	esac
done

cat << EOF > $CONFIG
	[ENVIRONMENT_VARS]
	project=$TARGET
	dir=$DIRECTORY

	[OPTIONS]
	use_defaults=$USE_DEFAULTS
	
	[REMOTES]
	default=https://github.com/maloryware/27tester-tests
EOF
# sed -i -E "s/(.*=)(.*)/\1 /g"