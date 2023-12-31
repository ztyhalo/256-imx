/*
 *Copyright © 2016, GUANGZHOU ZHIYUAN Electronics Co., Ltd
 *
 *@file dcp5k_m0.h
 *
 *@version v0.90 2016/8/16
 *
 *@brief DCP-5000L-QC-IO ioctl definitions
 *
 */

#ifndef _DCP5K_H_
#define _DCP5K_H_

#include <linux/ioctl.h>

#define DCP5K_MAGIC			'E'

#define DCP5K_SET_PCIE_POWON		_IOC(_IOC_WRITE, DCP5K_MAGIC, 0, 0)
#define DCP5K_SET_PCIE_POWOFF        	_IOC(_IOC_WRITE, DCP5K_MAGIC, 1, 0)
#define DCP5K_SET_PCIE_FLYON         	_IOC(_IOC_WRITE, DCP5K_MAGIC, 2, 0)
#define DCP5K_SET_PCIE_FLYOFF        	_IOC(_IOC_WRITE, DCP5K_MAGIC, 3, 0)
#define DCP5K_SET_PCIE_CARD0         	_IOC(_IOC_WRITE, DCP5K_MAGIC, 4, 0)
#define DCP5K_SET_PCIE_CARD1         	_IOC(_IOC_WRITE, DCP5K_MAGIC, 5, 0)
#define DCP5K_RESET_PCIE             	_IOC(_IOC_NONE, DCP5K_MAGIC, 6, 0)
#define DCP5K_GET_PCIE_STATE          	_IOC(_IOC_READ, DCP5K_MAGIC, 7, 0)

#define DCP5K_SET_DI_SCAN_PERIOD       	_IOC(_IOC_WRITE, DCP5K_MAGIC, 8, 0)
#define DCP5K_GET_DI_SCAN_PERIOD      	_IOC(_IOC_READ, DCP5K_MAGIC, 9, 0)
#define DCP5K_GET_DI_STATUS            	_IOC(_IOC_READ, DCP5K_MAGIC, 10, 0)

#define DCP5K_SET_DO                 	_IOC(_IOC_WRITE, DCP5K_MAGIC, 11, 0)
#define DCP5K_GET_DO_STATUS           	_IOC(_IOC_READ, DCP5K_MAGIC, 12, 0)

#define DCP5K_SET_IO_MODE            	_IOC(_IOC_WRITE, DCP5K_MAGIC, 13, 0)
#define DCP5K_GET_IO_MODE             	_IOC(_IOC_READ, DCP5K_MAGIC, 14, 0)

#define DCP5K_GET_ANT_STATE          	_IOC(_IOC_READ, DCP5K_MAGIC, 19, 0)

#define DCP5K_GET_INTERRUPT_STATE     	_IOC(_IOC_READ, DCP5K_MAGIC, 20, 0)
#define DCP5K_SET_INTERRUPT          	_IOC(_IOC_WRITE, DCP5K_MAGIC, 21, 0)
#define DCP5K_SET_INTERRUPT_PSAM     	_IOC(_IOC_WRITE, DCP5K_MAGIC, 22, 0)
#define DCP5K_SET_INTERRUPT_ESAM     	_IOC(_IOC_WRITE, DCP5K_MAGIC, 23, 0)
#define DCP5K_SET_INTERRUPT_DI       	_IOC(_IOC_WRITE, DCP5K_MAGIC, 24, 0)
#define DCP5K_SET_INTERRUPT_ANT     	_IOC(_IOC_WRITE, DCP5K_MAGIC, 25, 0)

#define DCP5K_RESET_DCP5K	     	_IOC(_IOC_NONE, DCP5K_MAGIC, 27, 0)
#define DCP5K_RESET_PSAM		_IOC(_IOC_NONE, DCP5K_MAGIC, 28, 0)
#define DCP5K_RESET_ESAM		_IOC(_IOC_NONE, DCP5K_MAGIC, 29, 0)
#define DCP5K_GET_PSAM_ESAM_STATE	_IOC(_IOC_READ, DCP5K_MAGIC, 30, 0)

#define DCP5K_WRITE_PSAM		_IOC(_IOC_WRITE,  DCP5K_MAGIC,  38,  0)
#define DCP5K_WRITE_ESAM		_IOC(_IOC_WRITE,  DCP5K_MAGIC,  39,  0)
#define DCP5K_READ_PSAM			_IOC(_IOC_READ,  DCP5K_MAGIC,  40,  0)
#define DCP5K_READ_ESAM			_IOC(_IOC_READ,  DCP5K_MAGIC,  41,  0)

#define DCP5K_SET_DCP5K			_IOC(_IOC_WRITE, DCP5K_MAGIC, 31, 0)
#define DCP5K_GET_STATE         	_IOC(_IOC_READ, DCP5K_MAGIC, 32, 0)
#define DCP5K_SET_TEST			_IOC(_IOC_READ, DCP5K_MAGIC, 33, 0)
#define DCP5K_GET_TEST			_IOC(_IOC_READ, DCP5K_MAGIC, 34, 0)

#define DCP5K_RESET_M0			_IOC(_IOC_READ, DCP5K_MAGIC, 35, 0)
#define DCP5K_UPDATE_M0			_IOC(_IOC_READ, DCP5K_MAGIC, 36, 0)
#define DCP5K_SET_WDT			_IOC(_IOC_READ, DCP5K_MAGIC, 37, 0)


#define DCP5K_PCIE_POWER_ON		1
#define DCP5K_PCIE_POWER_OFF		0
#define DCP5K_PCIE_FLY_ON		0
#define DCP5K_PCIE_FLY_OFF		1
#define DCP5K_PCIE_CARD0		0
#define DCP5K_PCIE_CARD1		1

#define DCP5K_SCAN_PERIOD_MAX		0xFF
#define DCP5K_DO_ALL_ON			0x3F

#define DCP5K_INTERRUPT_PSAM		(1<<7)
#define DCP5K_INTERRUPT_ESAM		(1<<6)
#define DCP5K_INTERRUPT_DI		(1<<5)
#define DCP5K_INTERRUPT_ANT		(1<<4)
#define DCP5K_IRQ_ALL_ON		0xF0

#define PSAM_STATUS_INITIAL		(0x0<<4)
#define PSAM_STATUS_RESETING		(0x1<<4)
#define PSAM_STATUS_ERROR		(0x2<<4)
#define PSAM_STATUS_FREE		(0x3<<4)
#define PSAM_STATUS_OPERATE		(0x4<<4)
#define PSAM_STATUS_COMPLISH		(0x5<<4)
#define PSAM_STATUS_MASK		(0x7<<4)
#define ESAM_STATUS_INITIAL		(0x0)
#define ESAM_STATUS_RESETING		(0x1)
#define ESAM_STATUS_ERROR		(0x2)
#define ESAM_STATUS_FREE		(0x3)
#define ESAM_STATUS_OPERATE		(0x4)
#define ESAM_STATUS_COMPLISH		(0x5)
#define ESAM_STATUS_MASK		(0x7)

#define DCP5K_PE_WAIT			0

#define DCP5K_IO_ID			0
#define DCP5K_ESAM_ID			1
#define DCP5K_PSAM_ID			2

#define IS_OPERATE_ESAM			0x00
#define IS_OPERATE_PSAM			0x80
#define DCP5K_POWER_SIGNAL             SIGIO

struct epsam_data{
	unsigned char len;
	unsigned char data[256];
};

struct dcp5k_pcie{
	unsigned char power;
	unsigned char fly;
};

#endif
