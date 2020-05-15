// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
# 1 "C:/Users/ajaiswal/Downloads/project13-master/sign.c"
# 1 "C:/Users/ajaiswal/Downloads/project13-master/sign.c" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 147 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "C:/Users/ajaiswal/Downloads/project13-master/sign.c" 2
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 1 3








# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 10 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 277 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
# 13 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 674 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 674 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 675 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 13 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)








 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 102 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
#pragma pack(pop)
# 277 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 370 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 380 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 392 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 405 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 418 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 428 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;







const char *__mingw_get_crt_info (void);





#pragma pack(pop)
# 9 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 2 3
# 36 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 3
  __attribute__ ((__dllimport__)) void *__cdecl _memccpy(void *_Dst,const void *_Src,int _Val,size_t _MaxCount);
                void *__cdecl memchr(const void *_Buf ,int _Val,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __cdecl _memicmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  __attribute__ ((__dllimport__)) int __cdecl _memicmp_l(const void *_Buf1,const void *_Buf2,size_t _Size,_locale_t _Locale);
  int __cdecl memcmp(const void *_Buf1,const void *_Buf2,size_t _Size);
  void *__cdecl memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _Size) ;
  void *__cdecl memset(void *_Dst,int _Val,size_t _Size);

  void *__cdecl memccpy(void *_Dst,const void *_Src,int _Val,size_t _Size) ;
  int __cdecl memicmp(const void *_Buf1,const void *_Buf2,size_t _Size) ;


  char *__cdecl _strset(char *_Str,int _Val) ;
  char *__cdecl _strset_l(char *_Str,int _Val,_locale_t _Locale) ;
  char *__cdecl strcpy(char * __restrict__ _Dest,const char * __restrict__ _Source);
  char *__cdecl strcat(char * __restrict__ _Dest,const char * __restrict__ _Source);
  int __cdecl strcmp(const char *_Str1,const char *_Str2);
  size_t __cdecl strlen(const char *_Str);
  size_t __cdecl strnlen(const char *_Str,size_t _MaxCount);
  void *__cdecl memmove(void *_Dst,const void *_Src,size_t _Size) ;
  __attribute__ ((__dllimport__)) char *__cdecl _strdup(const char *_Src);
                char *__cdecl strchr(const char *_Str,int _Val);
  __attribute__ ((__dllimport__)) int __cdecl _stricmp(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __cdecl _strcmpi(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __cdecl _stricmp_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  int __cdecl strcoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __cdecl _strcoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __cdecl _stricoll(const char *_Str1,const char *_Str2);
  __attribute__ ((__dllimport__)) int __cdecl _stricoll_l(const char *_Str1,const char *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __cdecl _strncoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __cdecl _strncoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __cdecl _strnicoll (const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __cdecl _strnicoll_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  size_t __cdecl strcspn(const char *_Str,const char *_Control);
  __attribute__ ((__dllimport__)) char *__cdecl _strerror(const char *_ErrMsg) ;
  char *__cdecl strerror(int) ;
  __attribute__ ((__dllimport__)) char *__cdecl _strlwr(char *_String) ;
  char *strlwr_l(char *_String,_locale_t _Locale) ;
  char *__cdecl strncat(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  int __cdecl strncmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __cdecl _strnicmp(const char *_Str1,const char *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __cdecl _strnicmp_l(const char *_Str1,const char *_Str2,size_t _MaxCount,_locale_t _Locale);
  char *strncpy(char * __restrict__ _Dest,const char * __restrict__ _Source,size_t _Count) ;
  __attribute__ ((__dllimport__)) char *__cdecl _strnset(char *_Str,int _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) char *__cdecl _strnset_l(char *str,int c,size_t count,_locale_t _Locale) ;
                char *__cdecl strpbrk(const char *_Str,const char *_Control);
                char *__cdecl strrchr(const char *_Str,int _Ch);
  __attribute__ ((__dllimport__)) char *__cdecl _strrev(char *_Str);
  size_t __cdecl strspn(const char *_Str,const char *_Control);
                char *__cdecl strstr(const char *_Str,const char *_SubStr);
  char *__cdecl strtok(char * __restrict__ _Str,const char * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) char *__cdecl _strupr(char *_String) ;
  __attribute__ ((__dllimport__)) char *_strupr_l(char *_String,_locale_t _Locale) ;
  size_t __cdecl strxfrm(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __cdecl _strxfrm_l(char * __restrict__ _Dst,const char * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);


  char *__cdecl strdup(const char *_Src) ;
  int __cdecl strcmpi(const char *_Str1,const char *_Str2) ;
  int __cdecl stricmp(const char *_Str1,const char *_Str2) ;
  char *__cdecl strlwr(char *_Str) ;
  int __cdecl strnicmp(const char *_Str1,const char *_Str,size_t _MaxCount) ;
  int __cdecl strncasecmp (const char *, const char *, size_t);
  int __cdecl strcasecmp (const char *, const char *);







  char *__cdecl strnset(char *_Str,int _Val,size_t _MaxCount) ;
  char *__cdecl strrev(char *_Str) ;
  char *__cdecl strset(char *_Str,int _Val) ;
  char *__cdecl strupr(char *_Str) ;





  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wcsdup(const wchar_t *_Str);
  wchar_t *__cdecl wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
                wchar_t *__cdecl wcschr(const wchar_t *_Str,wchar_t _Ch);
  int __cdecl wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t *__cdecl wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t __cdecl wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t __cdecl wcslen(const wchar_t *_Str);
  size_t __cdecl wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t *wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int __cdecl wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t *wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t *__cdecl _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
                wchar_t *__cdecl wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t *__cdecl wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t __cdecl wcsspn(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t *__cdecl wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t *__cdecl wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t *__cdecl __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int __cdecl _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __cdecl _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __cdecl _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __cdecl _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t __cdecl wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t __cdecl _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int __cdecl wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __cdecl _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __cdecl _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int __cdecl _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __cdecl _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __cdecl _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __cdecl _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int __cdecl _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);


  wchar_t *__cdecl wcsdup(const wchar_t *_Str) ;

  int __cdecl wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int __cdecl wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t *__cdecl wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t *__cdecl wcsrev(wchar_t *_Str) ;
  wchar_t *__cdecl wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t *__cdecl wcslwr(wchar_t *_Str) ;
  wchar_t *__cdecl wcsupr(wchar_t *_Str) ;
  int __cdecl wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;








# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/string_s.h" 1 3








# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 1 3
# 9 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/string_s.h" 2 3
# 175 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\string.h" 2 3
# 2 "C:/Users/ajaiswal/Downloads/project13-master/sign.c" 2
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\assert.h" 1 3
# 15 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\assert.h" 3
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 15 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\assert.h" 2 3







  void __cdecl __attribute__ ((__nothrow__)) exit(int _Code) __attribute__ ((__noreturn__));
 __attribute__ ((__dllimport__)) void __cdecl __attribute__ ((__nothrow__)) _exit(int _Code) __attribute__ ((__noreturn__));



  void __cdecl _Exit(int) __attribute__ ((__noreturn__));
# 36 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\assert.h" 3
  void __cdecl __attribute__((noreturn)) abort(void);
# 45 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\assert.h" 3
extern void __cdecl
_wassert(const wchar_t *_Message,const wchar_t *_File,unsigned _Line);
extern void __cdecl
_assert (const char *_Message, const char *_File, unsigned _Line);
# 3 "C:/Users/ajaiswal/Downloads/project13-master/sign.c" 2
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 1 3 4
# 33 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 3 4
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 1 3 4
# 28 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 3 4
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 28 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 2 3 4




# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 31 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;




typedef unsigned short wchar_t;
# 32 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdint.h" 2 3 4



typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
__extension__ typedef long long int64_t;
__extension__ typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
__extension__ typedef long long int_least64_t;
__extension__ typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef long long int_fast64_t;
__extension__ typedef unsigned long long uint_fast64_t;


__extension__ typedef long long intmax_t;
__extension__ typedef unsigned long long uintmax_t;
# 33 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stdint.h" 2 3 4
# 4 "C:/Users/ajaiswal/Downloads/project13-master/sign.c" 2
# 1 "C:/Users/ajaiswal/Downloads/project13-master/rng.h" 1
# 11 "C:/Users/ajaiswal/Downloads/project13-master/rng.h"
# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3








# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_push.h" 1 3
# 11 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 26 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
 struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;
# 84 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;





  __attribute__ ((__dllimport__)) FILE *__cdecl __iob_func(void);
# 120 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __extension__ typedef long long fpos_t;
# 157 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int __cdecl _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE *__cdecl _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void __cdecl clearerr(FILE *_File);
  int __cdecl fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE *__cdecl _fdopen(int _FileHandle,const char *_Mode);

  int __cdecl feof(FILE *_File);
  int __cdecl ferror(FILE *_File);
  int __cdecl fflush(FILE *_File);
  int __cdecl fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _fgetchar(void);
  int __cdecl fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char *__cdecl fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __cdecl _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char *__cdecl _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int __cdecl _flushall(void);
  FILE *__cdecl fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int __cdecl fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int __cdecl fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _fputchar(int _Ch);
  int __cdecl fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __cdecl fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__cdecl freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int __cdecl fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int __cdecl _fscanf_l(FILE * __restrict__ _File,const char * __restrict__ _Format,_locale_t locale,...) ;
  int __cdecl fsetpos(FILE *_File,const fpos_t *_Pos);
  int __cdecl fseek(FILE *_File,long _Offset,int _Origin);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  long __cdecl ftell(FILE *_File);
  _off64_t ftello64(FILE * stream);
  __extension__ int __cdecl _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long __cdecl _ftelli64(FILE *_File);
  size_t __cdecl fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __cdecl getc(FILE *_File);
  int __cdecl getchar(void);
  __attribute__ ((__dllimport__)) int __cdecl _getmaxstdio(void);
  char *__cdecl gets(char *_Buffer) ;
  int __cdecl _getw(FILE *_File);


  void __cdecl perror(const char *_ErrMsg);

  __attribute__ ((__dllimport__)) int __cdecl _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE *__cdecl _popen(const char *_Command,const char *_Mode);




  int __cdecl printf(const char * __restrict__ _Format,...);
  int __cdecl putc(int _Ch,FILE *_File);
  int __cdecl putchar(int _Ch);
  int __cdecl puts(const char *_Str);
  __attribute__ ((__dllimport__)) int __cdecl _putw(int _Word,FILE *_File);


  int __cdecl remove(const char *_Filename);
  int __cdecl rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int __cdecl _unlink(const char *_Filename);

  int __cdecl unlink(const char *_Filename) ;


  void __cdecl rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _rmtmp(void);
  int __cdecl scanf(const char * __restrict__ _Format,...) ;
  int __cdecl _scanf_l(const char * __restrict__ format,_locale_t locale,... ) ;
  void __cdecl setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int __cdecl _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int __cdecl _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int __cdecl _get_output_format(void);
  unsigned int __cdecl __mingw_set_output_format(unsigned int _Format);
  unsigned int __cdecl __mingw_get_output_format(void);




  int __cdecl setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int __cdecl _scprintf(const char * __restrict__ _Format,...);
  int __cdecl sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int __cdecl _sscanf_l(const char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _snscanf_l(const char * __restrict__ input,size_t length,const char * __restrict__ format,_locale_t locale,...) ;
  FILE *__cdecl tmpfile(void) ;
  char *__cdecl tmpnam(char *_Buffer);
  int __cdecl ungetc(int _Ch,FILE *_File);
  int __cdecl vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int __cdecl vprintf(const char * __restrict__ _Format,va_list _ArgList);


  extern
    __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
    int __cdecl __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
      va_list _ArgList);
  extern
    __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
    int __cdecl __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
  extern
    __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
    int __cdecl __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
    int __cdecl __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __cdecl __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __cdecl __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __cdecl __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __cdecl __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

  __attribute__ ((__dllimport__)) int __cdecl _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _snprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int __cdecl _vsnprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,va_list argptr) ;
  int __cdecl sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int __cdecl _sprintf_l(char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  int __cdecl vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;







  int __cdecl vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,va_list _ArgList) ;

  int __cdecl snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
# 312 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int __cdecl vscanf(const char * __restrict__ Format, va_list argp);
  int __cdecl vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int __cdecl vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  __attribute__ ((__dllimport__)) int __cdecl _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int __cdecl _get_printf_count_output(void);
# 330 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) FILE *__cdecl _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t __cdecl fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __cdecl _fgetwchar(void);
  wint_t __cdecl fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __cdecl _fputwchar(wchar_t _Ch);
  wint_t __cdecl getwc(FILE *_File);
  wint_t __cdecl getwchar(void);
  wint_t __cdecl putwc(wchar_t _Ch,FILE *_File);
  wint_t __cdecl putwchar(wchar_t _Ch);
  wint_t __cdecl ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__cdecl fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __cdecl fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int __cdecl _putws(const wchar_t *_Str);
  int __cdecl fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int __cdecl wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _scwprintf(const wchar_t * __restrict__ _Format,...);
  int __cdecl vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int __cdecl vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int __cdecl _swprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,... ) ;
  __attribute__ ((__dllimport__)) int __cdecl vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int __cdecl _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;





  int __cdecl snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int __cdecl vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
# 373 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int __cdecl vwscanf (const wchar_t * __restrict__ , va_list);
  int __cdecl vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int __cdecl vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int __cdecl _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int __cdecl _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __cdecl _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __cdecl __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _vswprintf_l(wchar_t * __restrict__ buffer,size_t count,const wchar_t * __restrict__ format,_locale_t locale,va_list argptr) ;
  __attribute__ ((__dllimport__)) int __cdecl __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 417 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int __cdecl _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int __cdecl _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int __cdecl fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int __cdecl swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int __cdecl _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int __cdecl wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int __cdecl _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE *__cdecl _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE *__cdecl _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE *__cdecl _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void __cdecl _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE *__cdecl _wpopen(const wchar_t *_Command,const wchar_t *_Mode);




  __attribute__ ((__dllimport__)) int __cdecl _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t *__cdecl _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t __cdecl _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __cdecl _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t __cdecl _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 475 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) void __cdecl _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void __cdecl _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int __cdecl _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __cdecl _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __cdecl _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long __cdecl _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int __cdecl _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long __cdecl _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t __cdecl _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int __cdecl _ungetc_nolock(int _Ch,FILE *_File);





  char *__cdecl tempnam(const char *_Directory,const char *_FilePrefix) ;
  int __cdecl fcloseall(void) ;
  FILE *__cdecl fdopen(int _FileHandle,const char *_Format) ;
  int __cdecl fgetchar(void) ;
  int __cdecl fileno(FILE *_File) ;
  int __cdecl flushall(void) ;
  int __cdecl fputchar(int _Ch) ;
  int __cdecl getw(FILE *_File) ;
  int __cdecl putw(int _Ch,FILE *_File) ;
  int __cdecl rmtmp(void) ;






#pragma pack(pop)


# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 1 3








# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
# 9 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 2 3
# 509 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_pop.h" 1 3
# 511 "C:/Xilinx/Vivado/2019.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
# 12 "C:/Users/ajaiswal/Downloads/project13-master/rng.h" 2






typedef struct {
    unsigned char buffer[16];
    int buffer_pos;
    unsigned long length_remaining;
    unsigned char key[32];
    unsigned char ctr[16];
} AES_XOF_struct;

typedef struct {
    unsigned char Key[32];
    unsigned char V[16];
    int reseed_counter;
} AES256_CTR_DRBG_struct;


void
AES256_CTR_DRBG_Update(unsigned char *provided_data,
                       unsigned char *Key,
                       unsigned char *V);

int
seedexpander_init(AES_XOF_struct *ctx,
                  unsigned char *seed,
                  unsigned char *diversifier,
                  unsigned long maxlen);

int
seedexpander(AES_XOF_struct *ctx, unsigned char *x, unsigned long xlen);

void
randombytes_init(unsigned char *entropy_input,
                 unsigned char *personalization_string,
                 int security_strength);

int
randombytes(unsigned char *x, unsigned long long xlen);
# 5 "C:/Users/ajaiswal/Downloads/project13-master/sign.c" 2
# 1 "C:/Users/ajaiswal/Downloads/project13-master/api.h" 1



# 1 "C:/Users/ajaiswal/Downloads/project13-master/params.h" 1
# 5 "C:/Users/ajaiswal/Downloads/project13-master/api.h" 2
# 15 "C:/Users/ajaiswal/Downloads/project13-master/api.h"
int crypto_sign_keypair(unsigned char *pk, unsigned char *sk);





int crypto_sign(unsigned char sm[3300+(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))], unsigned long long smlen[1],
                const unsigned char m[3300], unsigned long long mlen,
                const unsigned char sk[16]);







int crypto_sign_open(unsigned char m[3300], unsigned long long mlen[1],
                     const unsigned char sm[3300+(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))], unsigned long long smlen,
                     const unsigned char pk[(16 + ((48 * 5) >> 3))]);
# 6 "C:/Users/ajaiswal/Downloads/project13-master/sign.c" 2

# 1 "C:/Users/ajaiswal/Downloads/project13-master/mq.h" 1



# 1 "C:/Users/ajaiswal/Downloads/project13-master/gf31.h" 1



typedef unsigned short gf31;



gf31 mod31(gf31 x);



void vgf31_unique(gf31 *out, gf31 *in);



void vgf31_shorten_unique(gf31 *out, gf31 *in);



void gf31_nrand(gf31 *out, const int len, const unsigned char *seed, const int seedlen);




void gf31_nrand_schar(signed char *out, const int len, const unsigned char *seed, const int seedlen);




void gf31_nunpack(gf31 *out, const unsigned char *in, const unsigned int n);




void gf31_npack(unsigned char *out, const gf31 *in, const unsigned int n);
# 5 "C:/Users/ajaiswal/Downloads/project13-master/mq.h" 2





void MQ(gf31 *fx, const gf31 *x, const signed char *F);





void G(gf31 *fx, const gf31 *x, const gf31 *y, const signed char *F);
# 8 "C:/Users/ajaiswal/Downloads/project13-master/sign.c" 2

# 1 "C:/Users/ajaiswal/Downloads/project13-master/fips202.h" 1
# 11 "C:/Users/ajaiswal/Downloads/project13-master/fips202.h"
void shake256_absorb(uint64_t *s, const unsigned char *input, unsigned long long inputByteLen);
void shake256_squeezeblocks(unsigned char *output, unsigned long long nblocks, uint64_t *s);
void shake256_squeezebytes(unsigned char *output, unsigned long long outputByteLen, uint64_t *s);
void shake256(unsigned char *output, unsigned long long outputByteLen, const unsigned char *input, unsigned long long inputByteLen);

void shake256_partial_absorb(uint64_t *s,
                             const unsigned char *m, unsigned long long int mlen,
                             unsigned long long *absorbed_bytes);
void shake256_close_absorb(uint64_t *s, unsigned long long *absorbed_bytes);

void cshake256_simple(unsigned char *output, unsigned long long outlen, unsigned char *custom, unsigned long long customlen, const unsigned char *in, unsigned long long inlen);
void cshake256_256simple(unsigned char *output, const char *custom, const unsigned char *in, unsigned long long inlen);

int crypto_stream_shake256(unsigned char *output, unsigned long long outlen, const unsigned char *nonce, const unsigned char *key);
# 10 "C:/Users/ajaiswal/Downloads/project13-master/sign.c" 2



void H(unsigned char *out, const unsigned char *in, const unsigned int len)
{
    shake256(out, 32, in, len);
}



void com_0(unsigned char *c,
           const unsigned char *rho,
           const unsigned char *inn, const unsigned char *inn2,
           const unsigned char *inm)
{
    unsigned char buffer[32 + 2*((48 * 5) >> 3) + ((48 * 5) >> 3)];
    int loop;
    com_0_label2:for(loop=0;loop<32;loop++)
     buffer[loop]=rho[loop];
    for(loop=0;loop<((48 * 5) >> 3);loop++)
     buffer[loop+ 32]=inn[loop];
    com_0_label8:for(loop=0;loop<((48 * 5) >> 3);loop++)
     buffer[loop + 32 + ((48 * 5) >> 3)]=inn2[loop];
    com_0_label3:for(loop=0;loop<((48 * 5) >> 3);loop++)
     buffer[loop + 32 + 2*((48 * 5) >> 3)]=inm[loop];




    shake256(c, 32, buffer, 32 + 2*((48 * 5) >> 3) + ((48 * 5) >> 3));
}



void com_1(unsigned char *c,
           const unsigned char *rho,
           const unsigned char *inn, const unsigned char *inm)
{
    unsigned char buffer[32 + ((48 * 5) >> 3) + ((48 * 5) >> 3)];
    int loop;
    com_1_label7:for(loop=0;loop<32;loop++)
     buffer[loop]=rho[loop];
    com_1_label4:for(loop=0;loop<((48 * 5) >> 3);loop++)
     buffer[loop+ 32]=inn[loop];
    com_1_label5:for(loop=0;loop<((48 * 5) >> 3);loop++)
     buffer[loop + 32 + ((48 * 5) >> 3)]=inm[loop];



    shake256(c, 32, buffer, 32 + ((48 * 5) >> 3) + ((48 * 5) >> 3));
}




int crypto_sign_keypair(unsigned char pk[(16 + ((48 * 5) >> 3))], unsigned char sk[16])
{
    signed char F[(48 * (((48 * (48 + 1)) >> 1) + 48))];
    unsigned char skbuf[16 * 2];
    gf31 sk_gf31[48];
    gf31 pk_gf31[48];
    int loop;




    randombytes(sk, 16);
    shake256(skbuf, 16 * 2, sk, 16);


    crypto_sign_keypair_label6:for(loop=0;loop<16;loop++)
     pk[loop]=skbuf[loop];
    gf31_nrand_schar(F, (48 * (((48 * (48 + 1)) >> 1) + 48)), pk, 16);
    gf31_nrand(sk_gf31, 48, skbuf + 16, 16);
    MQ(pk_gf31, sk_gf31, F);
    vgf31_unique(pk_gf31, pk_gf31);
    gf31_npack(pk + 16, pk_gf31, 48);

    return 0;
}





int crypto_sign(unsigned char sm[3300+(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))], unsigned long long smlen[1],
                const unsigned char m[3300], unsigned long long mlen,
                const unsigned char sk[16])
{
    signed char F[(48 * (((48 * (48 + 1)) >> 1) + 48))];
    unsigned char skbuf[16 * 4];
    gf31 pk_gf31[48];
    unsigned char pk[16 + ((48 * 5) >> 3)];

    unsigned char D_sigma0_h0_sigma1[32 * 3 + 135 * (((48 * 5) >> 3) + ((48 * 5) >> 3))];
    unsigned char *D = D_sigma0_h0_sigma1;
    unsigned char *sigma0 = D_sigma0_h0_sigma1 + 32;
    unsigned char *h0 = D_sigma0_h0_sigma1 + 2*32;
    unsigned char *t1packed = D_sigma0_h0_sigma1 + 3*32;
    unsigned char *e1packed = D_sigma0_h0_sigma1 + 3*32 + 135 * ((48 * 5) >> 3);
    uint64_t shakestate[25] = {0};
    unsigned char shakeblock[136];
    unsigned char h1[((135 + 7) & ~7) >> 3];
    unsigned char rnd_seed[32 + 16];
    unsigned char rho[2 * 135 * 32];
    unsigned char *rho0 = rho;
    unsigned char *rho1 = rho + 135 * 32;
    gf31 sk_gf31[48];
    gf31 rnd[(2 * 48 + 48) * 135];
    gf31 *r0 = rnd;
    gf31 *t0 = rnd + 48 * 135;
    gf31 *e0 = rnd + 2 * 48 * 135;
    gf31 r1[48 * 135];
    gf31 t1[48 * 135];
    gf31 e1[48 * 135];
    gf31 gx[48 * 135];
    unsigned char packbuf0[((48 * 5) >> 3)];
    unsigned char packbuf1[((48 * 5) >> 3)];
    unsigned char packbuf2[((48 * 5) >> 3)];
    unsigned char c[32 * 135 * 2];
    gf31 alpha;
    int alpha_count = 0;
    unsigned char b;
    int i, j;
    int loop;

    shake256(skbuf, 16 * 4, sk, 16);

    gf31_nrand_schar(F, (48 * (((48 * (48 + 1)) >> 1) + 48)), skbuf, 16);

    (void) ((!!((2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32)) > 16)) || (_assert("SIG_LEN > SEED_BYTES","C:/Users/ajaiswal/Downloads/project13-master/sign.c",140),0));


    crypto_sign_label9:for(loop=0;loop<16;loop++)
     sm[(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))-16 + loop]=sk[loop];
    for(loop=0;loop<mlen;loop++)
     sm[(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32)) + loop]=m[loop];
    H(sm, sm + (2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32)) - 16, mlen + 16);


    for(loop=0;loop<16;loop++)
     pk[loop]=skbuf[loop];
    gf31_nrand(sk_gf31, 48, skbuf + 16, 16);
    MQ(pk_gf31, sk_gf31, F);
    vgf31_unique(pk_gf31, pk_gf31);
    gf31_npack(pk + 16, pk_gf31, 48);



    for(loop=0;loop<(16 + ((48 * 5) >> 3));loop++)
     sm[(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32)) - 32 - (16 + ((48 * 5) >> 3)) + loop]=pk[loop];
    crypto_sign_label19:for(loop=0;loop<32;loop++)
     sm[(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32)) - 32 + loop]=sm[loop];
    H(D, sm + (2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32)) - 32 - (16 + ((48 * 5) >> 3)), mlen + (16 + ((48 * 5) >> 3)) + 32);

    sm += 32;



    crypto_sign_label20:for(loop=0;loop<16;loop++)
     rnd_seed[loop]=skbuf[2*16 +loop];
    for(loop=0;loop<32;loop++)
     rnd_seed[16 +loop]=D[loop];
    shake256(rho, 2 * 135 * 32, rnd_seed, 16 + 32);



    crypto_sign_label21:for(loop=0;loop<16;loop++)
      rnd_seed[loop]=skbuf[3*16 +loop];
    for(loop=0;loop<32;loop++)
      rnd_seed[16 +loop]=D[loop];
    gf31_nrand(rnd, (2 * 48 + 48) * 135, rnd_seed, 16 + 32);

    crypto_sign_label22:for (i = 0; i < 135; i++) {
        crypto_sign_label18:for (j = 0; j < 48; j++) {
            r1[j + i*48] = 31 + sk_gf31[j] - r0[j + i*48];
        }
        G(gx + i*48, t0 + i*48, r1 + i*48, F);
    }
    for (i = 0; i < 135 * 48; i++) {
        gx[i] += e0[i];
    }
    crypto_sign_label23:for (i = 0; i < 135; i++) {
        gf31_npack(packbuf0, r0 + i*48, 48);
        gf31_npack(packbuf1, t0 + i*48, 48);
        gf31_npack(packbuf2, e0 + i*48, 48);
        com_0(c + 32 * (2*i + 0), rho0 + i*32, packbuf0, packbuf1, packbuf2);
        vgf31_shorten_unique(r1 + i*48, r1 + i*48);
        vgf31_shorten_unique(gx + i*48, gx + i*48);
        gf31_npack(packbuf0, r1 + i*48, 48);
        gf31_npack(packbuf1, gx + i*48, 48);
        com_1(c + 32 * (2*i + 1), rho1 + i*32, packbuf0, packbuf1);
    }

    H(sigma0, c, 32 * 135 * 2);
    shake256_absorb(shakestate, D_sigma0_h0_sigma1, 2 * 32);
    shake256_squeezeblocks(shakeblock, 1, shakestate);


    for(loop=0;loop<32;loop++)
      h0[loop]=shakeblock[loop];


    for(loop=0;loop<32;loop++)
      sm[loop]=sigma0[loop];
    sm += 32;

    crypto_sign_label32:for (i = 0; i < 135; i++) {
        do {
            alpha = shakeblock[alpha_count] & 31;
            alpha_count++;
            if (alpha_count == 136) {
                alpha_count = 0;
                shake256_squeezeblocks(shakeblock, 1, shakestate);
            }
        } while (alpha == 31);
        for (j = 0; j < 48; j++) {
            t1[i*48 + j] = alpha * r0[j + i*48] - t0[j + i*48] + 31;
        }
        MQ(e1 + i*48, r0 + i*48, F);
        for (j = 0; j < 48; j++) {
            e1[i*48 + j] = alpha * e1[j + i*48] - e0[j + i*48] + 31;
        }
        vgf31_shorten_unique(t1 + i*48, t1 + i*48);
        vgf31_shorten_unique(e1 + i*48, e1 + i*48);
    }
    gf31_npack(t1packed, t1, 48 * 135);
    gf31_npack(e1packed, e1, 48 * 135);


    crypto_sign_label33:for(loop=0;loop<((48 * 5) >> 3) * 135;loop++)
      sm[loop]=t1packed[loop];
    sm += ((48 * 5) >> 3) * 135;

    for(loop=0;loop<((48 * 5) >> 3) * 135;loop++)
      sm[loop]=e1packed[loop];
    sm += ((48 * 5) >> 3) * 135;

    shake256(h1, ((135 + 7) & ~7) >> 3, D_sigma0_h0_sigma1, 3*32 + 135*(((48 * 5) >> 3) + ((48 * 5) >> 3)));

    crypto_sign_label34:for (i = 0; i < 135; i++) {
        b = (h1[(i >> 3)] >> (i & 7)) & 1;
        if (b == 0) {
            gf31_npack(sm, r0+i*48, 48);
        } else if (b == 1) {
            gf31_npack(sm, r1+i*48, 48);
        }


        for(loop=0;loop<32;loop++)
          sm[((48 * 5) >> 3)+loop]=c[32 * (2*i + (1 - b)) + loop];
        for(loop=0;loop<32;loop++)
          sm[((48 * 5) >> 3) + 32 +loop]=rho[(i + b * 135) * 32 + loop];
        sm += ((48 * 5) >> 3) + 2*32;
    }
    *smlen = (2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32)) + mlen;
    return 0;
}






int crypto_sign_open(unsigned char m[3300], unsigned long long mlen[1],
                     const unsigned char sm[3300+(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))], unsigned long long smlen,
                     const unsigned char pk[(16 + ((48 * 5) >> 3))])
{
    gf31 r[48];
    gf31 t[48];
    gf31 e[48];
    signed char F[(48 * (((48 * (48 + 1)) >> 1) + 48))];
    gf31 pk_gf31[48];
    unsigned char sig[(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))];
    unsigned char *sigptr = sig;

    unsigned char D_sigma0_h0_sigma1[32 * 3 + 135 * (((48 * 5) >> 3) + ((48 * 5) >> 3))];
    unsigned char *D = D_sigma0_h0_sigma1;
    unsigned char *sigma0 = D_sigma0_h0_sigma1 + 32;
    unsigned char *h0 = D_sigma0_h0_sigma1 + 2*32;
    unsigned char *t1packed = D_sigma0_h0_sigma1 + 3*32;
    unsigned char *e1packed = D_sigma0_h0_sigma1 + 3*32 + 135 * ((48 * 5) >> 3);
    unsigned char h1[((135 + 7) & ~7) >> 3];
    unsigned char c[32 * 135 * 2];

    gf31 x[48];
    gf31 y[48];
    gf31 z[48];
    unsigned char packbuf0[((48 * 5) >> 3)];
    unsigned char packbuf1[((48 * 5) >> 3)];
    uint64_t shakestate[25] = {0};
    unsigned char shakeblock[136];
    int i, j;
    int loop;
    gf31 alpha;
    int alpha_count = 0;
    unsigned char b;

    crypto_sign_open_label35:for(loop=0;loop<32*2;loop++)
     c[loop]=0;


    if (smlen < (2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))) {
  crypto_sign_open_label36:for(i=0;i<smlen;i++)
   m[i]=0;
  mlen[0] = 0;
  return 1;



    }

    *mlen = smlen - (2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32));



    crypto_sign_open_label37:for(loop=0;loop<(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32));loop++)
     sig[loop]=sm[loop];







    crypto_sign_open_label38:for(loop=0;loop<mlen[0];loop++)
     m[(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))+loop]=sm[(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))+loop];
    for(loop=0;loop<(16 + ((48 * 5) >> 3));loop++)
     m[(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))-(16 + ((48 * 5) >> 3))-32 +loop]=pk[loop];
    for(loop=0;loop<32;loop++)
     m[(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))-32 +loop]=sigptr[loop];
    H(D, m + (2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32)) - (16 + ((48 * 5) >> 3)) - 32, *mlen + (16 + ((48 * 5) >> 3)) + 32);

    sigptr += 32;

    gf31_nrand_schar(F, (48 * (((48 * (48 + 1)) >> 1) + 48)), pk, 16);
    pk += 16;
    gf31_nunpack(pk_gf31, pk, 48);


    for(loop=0;loop<32;loop++)
     sigma0[loop]=sigptr[loop];

    shake256_absorb(shakestate, D_sigma0_h0_sigma1, 2 * 32);
    shake256_squeezeblocks(shakeblock, 1, shakestate);


    for(loop=0;loop<32;loop++)
     h0[loop]=shakeblock[loop];

    sigptr += 32;


    for(loop=0;loop<135 * ((48 * 5) >> 3);loop++)
     t1packed[loop]=sigptr[loop];
    sigptr += 135*((48 * 5) >> 3);

    for(loop=0;loop<135 * ((48 * 5) >> 3);loop++)
     e1packed[loop]=sigptr[loop];
    sigptr += 135*((48 * 5) >> 3);

    shake256(h1, ((135 + 7) & ~7) >> 3, D_sigma0_h0_sigma1, 3*32 + 135*(((48 * 5) >> 3) + ((48 * 5) >> 3)));

    crypto_sign_open_label39:for (i = 0; i < 135; i++) {
        do {
            alpha = shakeblock[alpha_count] & 31;
            alpha_count++;
            if (alpha_count == 136) {
                alpha_count = 0;
                shake256_squeezeblocks(shakeblock, 1, shakestate);
            }
        } while (alpha == 31);
        b = (h1[(i >> 3)] >> (i & 7)) & 1;

        gf31_nunpack(r, sigptr, 48);
        gf31_nunpack(t, t1packed + ((48 * 5) >> 3)*i, 48);
        gf31_nunpack(e, e1packed + ((48 * 5) >> 3)*i, 48);

        if (b == 0) {
            MQ(y, r, F);
            for (j = 0; j < 48; j++) {
                x[j] = alpha * r[j] - t[j] + 31;
            }
            for (j = 0; j < 48; j++) {
                y[j] = alpha * y[j] - e[j] + 31;
            }
            vgf31_shorten_unique(x, x);
            vgf31_shorten_unique(y, y);
            gf31_npack(packbuf0, x, 48);
            gf31_npack(packbuf1, y, 48);
            com_0(c + 32*(2*i + 0), sigptr + 32 + ((48 * 5) >> 3), sigptr, packbuf0, packbuf1);
        } else {
            MQ(y, r, F);
            G(z, t, r, F);
            for (j = 0; j < 48; j++) {
                y[j] = alpha * (31 + pk_gf31[j] - y[j]) - z[j] - e[j] + 62;
            }
            vgf31_shorten_unique(y, y);
            gf31_npack(packbuf0, y, 48);
            com_1(c + 32*(2*i + 1), sigptr + 32 + ((48 * 5) >> 3), sigptr, packbuf0);
        }

        for(loop=0;loop<32;loop++)
         c[32*(2*i + (1 - b))+loop]=sigptr[((48 * 5) >> 3)+loop];
        sigptr += ((48 * 5) >> 3) + 2*32;
    }

    H(c, c, 32 * 135 * 2);
    crypto_sign_open_label25:for(loop=0;loop<32;loop++) {
     if(c[loop] != sigma0[loop]) {
      for(i=0;i<smlen;i++)
       m[i]=0;
      mlen[0] = 0;
      return 1;
     }
    }
# 434 "C:/Users/ajaiswal/Downloads/project13-master/sign.c"
    crypto_sign_open_label24:for(loop=0;loop<mlen[0];loop++)
     m[loop]=m[(2 * 32 + 135 * (2*((48 * 5) >> 3) + ((48 * 5) >> 3) + 32 + 32))+loop];

    return 0;
}
