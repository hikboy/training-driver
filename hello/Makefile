
ifneq ($(KERNELRELEASE),)
	obj-m := hello.o

else
	#KERNELDIR ?= /home/ht/kernel/fc6/linux-2.6.18 
	KERNELDIR ?= /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean: 
	rm -rf *.o .*.cmd *.ko *.mod.c .tmp_versions Module.symvers

endif
