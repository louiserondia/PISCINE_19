ifconfig -a | grep "ether" | grep -v media | cut -b 8- | cut -b -17
