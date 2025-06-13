#!/bin/bash
CONFIG=$1

cat << EOF > $CONFIG_FILE
	[OPTIONS]
	
	use_local_only=true
	remotes=[github:maloryware/27tester-tests]

EOF


# sed -i -E "s/(.*=)(.*)/\1 /g"