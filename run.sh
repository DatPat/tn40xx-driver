sudo rmmod tn40xx
make all
sudo make install
sudo insmod tn40xx.ko
sudo dmesg