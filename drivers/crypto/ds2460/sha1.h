/****************************************Copyright (c)**************************************************
**                               Guangzhou ZHIYUAN electronics Co.,LTD.
**
**                                 http://www.zyinside.com
**
**--------------File Info-------------------------------------------------------------------------------
** File name:           sha1.h
** Last modified Date:  2007-04-07
** Last Version:        1.0 Header file for SHA-1 .
*------------------------------------------------------------------------------------------------------
** Created by:          NA
** Created date:        1995
** Version:             NA
** Descriptions:        NA
**------------------------------------------------------------------------------------------------------
** Modified by:         chenmingji
** Modified date:       2007-04-18
** Version:             1.0
** Descriptions:        The original version
********************************************************************************************************/

#ifndef __SHA1_H__
#define __SHA1_H__

#ifndef __SHA_enum__
#define __SHA_enum__

#include "config.h"
enum {
    shaSuccess = 0,
    shaNull,            /* Null pointer parameter */
    shaInputTooLong,    /* input data too long */
    shaStateError       /* called Input after Result */
};
#endif
#define SHA1HashSize 20

/* SHA-1 Algorithm Registers */
typedef struct SHA1Context
{
    unsigned int Intermediate_Hash[SHA1HashSize/4];   /* Message Digest                 */
    unsigned int Length_Low;                          /* Message length in bits         */
    unsigned int Length_High;                         /* Message length in bits         */

                                                /* Index into message block array */
    short Message_Block_Index;
    short nouse;
    unsigned char Message_Block[64];                    /* 512-bit message blocks         */
    int Computed;                               /* Is the digest computed?        */
    int Corrupted;                              /* Is the message digest corrupted? */
} SHA1Context;

#ifndef IN_SHA1

extern int SHA1Init(SHA1Context *context);
/*********************************************************************************************************
** Function name:           SHA1Init
** Descriptions:            ��ʼ��SHA-1�㷨�Ĵ���
** input parameters:        context   : SHA-1�㷨�Ĵ���
** Returned value:          shaSuccess : �ɹ�
**                          shaNull    : contextΪ��
********************************************************************************************************/

extern int SHA1Update(SHA1Context *context, const unsigned char  *input, unsigned int inputLen);
/*********************************************************************************************************
** Function name:           SHA1Update
** Descriptions:            ִ��һ��SHA-1�㷨
** input parameters:        context    : SHA-1�㷨�Ĵ���
**                          input      : �������
**                          inputLen   : ����ķ���ĳ���
** Returned value:          shaSuccess      : �ɹ�
**                          shaNull         : contextΪ��
**                          shaInputTooLong : �������ݳ���
**                          shaStateError   : ��ý��������˺���SHA1Update()
********************************************************************************************************/

extern int SHA1Final(unsigned char digest[SHA1HashSize], SHA1Context *context);
/*********************************************************************************************************
** Function name:           SHA1Final
** Descriptions:            SHA-1���ս��. ��һ��SHA-1����ժҪ��������, д��
**                          ����ժҪֵ
** input parameters:        digest    : ����ժҪ
**                          context   : SHA-1�㷨�Ĵ���
** Returned value:          shaSuccess      : �ɹ�
**                          shaNull         : contextΪ��
**                          shaInputTooLong : �������ݳ���
**                          shaStateError   : ��ý��������˺���SHA1Update()
********************************************************************************************************/

#endif

#endif
/*********************************************************************************************************
**                            End Of File
********************************************************************************************************/

