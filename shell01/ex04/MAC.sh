ifconfig -a link | grep eth | awk '{print $2}'
