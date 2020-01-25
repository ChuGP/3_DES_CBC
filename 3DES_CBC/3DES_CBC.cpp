// 3DES_CBC.cpp: 主要專案檔。

#include "stdafx.h"
#include "lib3DESCBC.h"
#include  <stdio.h>
using namespace System;

int main(array<System::String ^> ^args)
{
	 
	 unsigned char data[100] = "This is a Test file what you want to key!";
	 
     byte retdata[256] = {0};

	 //DES KEY
	 //'0','1','2','3','4','5','6','7','0','1','2','3','4','5','6','7','0','1','2','3','4','5','6','7'
     byte desKey[24] = {0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,
		                0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,
						0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37 } ;

	 //DES IV
	 byte desIV[8]= {0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37 }; //'0','1','2','3','4','5','6','7'
    
	 //Encode
     DES_CBC_encode(data, sizeof(data), retdata, desKey, desIV);
     int i = 0;
	 printf("Original Text:%s",data);
     printf("\nDES_CBC_encode:\n");
     for(i = 0; i < sizeof(retdata); i++)
     {
                printf("%.2X ", retdata[i]);
     }
       
     ZeroMemory(&data, sizeof(data)); //Clear All Memory

	 //Decode
     DES_CBC_decode(retdata, sizeof(retdata), data, desKey, desIV);
       
     printf("\n\nDES_CBC_decode:\n");
     for(i = 0; i < sizeof(data); i++)
     {
                printf("%.2X(%c) ", data[i] , data[i] );
     }
	 char ch = getchar();
     return 0;
}
