/****************************************Copyright (c)**************************************************
**                               Guangzou ZLG-MCU Development Co.,LTD.
**                                      graduate school
**                                 http://www.zlgmcu.com
**
**--------------File Info-------------------------------------------------------------------------------
** File name:			sha-1.h
** Last modified Date:	2005-11-21
** Last Version:		1.01
** Descriptions:		The software realization of the calculate way SHA-1
**
**------------------------------------------------------------------------------------------------------
** Created by:			zouchao
** Created date:		2005-10-28
** Version:				1.0
** Descriptions:		The original version
**
**------------------------------------------------------------------------------------------------------
** Modified by:			Chenmingji
** Modified date:		2005-11-21
** Version:				1.01
** Descriptions:		Change to one function
**
**------------------------------------------------------------------------------------------------------
** Modified by: 
** Modified date:
** Version:	
** Descriptions: 
**
********************************************************************************************************/
#ifndef  __CONFIG_H
#define  __CONFIG_H

typedef unsigned char  uint8;  /* defined for unsigned 8-bits integer variable 	�޷���8λ���ͱ���  */
typedef signed   char  int8;   /* defined for signed 8-bits integer variable		�з���8λ���ͱ���  */
typedef unsigned short uint16; /* defined for unsigned 16-bits integer variable 	�޷���16λ���ͱ��� */
typedef signed   short int16;  /* defined for signed 16-bits integer variable 		�з���16λ���ͱ��� */
typedef unsigned int   uint32; /* defined for unsigned 32-bits integer variable 	�޷���32λ���ͱ��� */
typedef signed   int   int32;  /* defined for signed 32-bits integer variable 		�з���32λ���ͱ��� */
typedef float          fp32; /* single precision floating point variable (32bits) �����ȸ�������32λ����*/
typedef double         fp64; /* double precision floating point variable (64bits) ˫���ȸ�������64λ����*/

typedef unsigned char UCHAR;
typedef unsigned char UINT8;
typedef unsigned short USHORT;
typedef unsigned long long DWORD;

typedef enum bool { 
    FALSE, TRUE 
}BOOL; 
#define NULL			-1

#define DS2460_DEBUG_EN 0
int CrpTask(BOOL bUSerType, BOOL bCrpFirstPhase, UCHAR *pRandom, DWORD dwRandomlen);

#endif

/*********************************************************************************************************
**                            End Of File
********************************************************************************************************/
