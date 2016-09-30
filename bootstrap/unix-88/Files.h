/* voc 1.95 [2016/09/30]. Bootstrapping compiler for address size 8, alignment 8. tspaSfF */

#ifndef Files__h
#define Files__h

#include "SYSTEM.h"

typedef
	struct Files_FileDesc *Files_File;

typedef
	struct Files_FileDesc {
		int64 _prvt0;
		char _prvt1[208];
		int32 fd;
		char _prvt2[60];
	} Files_FileDesc;

typedef
	struct Files_Rider {
		int32 res;
		BOOLEAN eof;
		int64 _prvt0;
		char _prvt1[8];
	} Files_Rider;



import address *Files_FileDesc__typ;
import address *Files_Rider__typ;

import Files_File Files_Base (Files_Rider *r, address *r__typ);
import void Files_ChangeDirectory (CHAR *path, LONGINT path__len, int16 *res);
import void Files_Close (Files_File f);
import void Files_Delete (CHAR *name, LONGINT name__len, int16 *res);
import void Files_GetDate (Files_File f, int32 *t, int32 *d);
import void Files_GetName (Files_File f, CHAR *name, LONGINT name__len);
import int32 Files_Length (Files_File f);
import Files_File Files_New (CHAR *name, LONGINT name__len);
import Files_File Files_Old (CHAR *name, LONGINT name__len);
import int32 Files_Pos (Files_Rider *r, address *r__typ);
import void Files_Purge (Files_File f);
import void Files_Read (Files_Rider *r, address *r__typ, SYSTEM_BYTE *x);
import void Files_ReadBool (Files_Rider *R, address *R__typ, BOOLEAN *x);
import void Files_ReadBytes (Files_Rider *r, address *r__typ, SYSTEM_BYTE *x, LONGINT x__len, int32 n);
import void Files_ReadInt (Files_Rider *R, address *R__typ, int16 *x);
import void Files_ReadLInt (Files_Rider *R, address *R__typ, int32 *x);
import void Files_ReadLReal (Files_Rider *R, address *R__typ, LONGREAL *x);
import void Files_ReadLine (Files_Rider *R, address *R__typ, CHAR *x, LONGINT x__len);
import void Files_ReadNum (Files_Rider *R, address *R__typ, SYSTEM_BYTE *x, LONGINT x__len);
import void Files_ReadReal (Files_Rider *R, address *R__typ, REAL *x);
import void Files_ReadSet (Files_Rider *R, address *R__typ, uint32 *x);
import void Files_ReadString (Files_Rider *R, address *R__typ, CHAR *x, LONGINT x__len);
import void Files_Register (Files_File f);
import void Files_Rename (CHAR *old, LONGINT old__len, CHAR *new, LONGINT new__len, int16 *res);
import void Files_Set (Files_Rider *r, address *r__typ, Files_File f, int32 pos);
import void Files_SetSearchPath (CHAR *path, LONGINT path__len);
import void Files_Write (Files_Rider *r, address *r__typ, SYSTEM_BYTE x);
import void Files_WriteBool (Files_Rider *R, address *R__typ, BOOLEAN x);
import void Files_WriteBytes (Files_Rider *r, address *r__typ, SYSTEM_BYTE *x, LONGINT x__len, int32 n);
import void Files_WriteInt (Files_Rider *R, address *R__typ, int16 x);
import void Files_WriteLInt (Files_Rider *R, address *R__typ, int32 x);
import void Files_WriteLReal (Files_Rider *R, address *R__typ, LONGREAL x);
import void Files_WriteNum (Files_Rider *R, address *R__typ, int64 x);
import void Files_WriteReal (Files_Rider *R, address *R__typ, REAL x);
import void Files_WriteSet (Files_Rider *R, address *R__typ, uint32 x);
import void Files_WriteString (Files_Rider *R, address *R__typ, CHAR *x, LONGINT x__len);
import void *Files__init(void);


#endif // Files
