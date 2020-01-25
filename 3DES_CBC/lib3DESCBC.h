
#include <windows.h>

enum {ENCRYPT, DECRYPT};

//////////////////////////////////////////////////////////////////////////

// 加/解密 Type—ENCRYPT:加密,DECRYPT:解密
void Des_Run(char Out[8], char In[8], bool Type = ENCRYPT);
// 设置密钥
void Des_SetKey(const char Key[8]);
int DESede_CBC_decode(byte *lpIndata, int nlen, byte *lpOutData, byte lpK1[8], byte lpK2[8], byte lpK3[8], byte lpvi[8]);
int DESede_CBC_encode(byte *lpIndata, int nlen, byte *lpOutData, byte lpK1[8], byte lpK2[8], byte lpK3[8], byte lpvi[8]);

// DES算法CBC模式 -- 飘云
int DES_CBC_encode(byte *lpIndata,int nlen, byte *lpOutData, byte lpKey[8], byte lpIV[8]);
int DES_CBC_decode(byte *lpIndata, int nlen, byte *lpOutData, byte lpKey[8], byte lpIV[8]);

void DES_encode(byte *lpIndata, int nlen, byte *lpOut, byte *lpkey);
void DES_decode(byte *lpIndata, int nlen, byte *lpOut, byte *lpkey);