typedef void *X509;
typedef void *ASN1_UTCTIME;
typedef void *X509_NAME;

char *VSSL_Id( void );
APTR VSSL_Create_CTX( void );
void VSSL_Free_CTX( APTR ctx );
APTR VSSL_Connect( APTR ctx, int sock );
void VSSL_Close( APTR ssl );
char *VSSL_GetCipher( APTR ssl );
int VSSL_Write( APTR ssl, APTR buff, int len );
int VSSL_Read( APTR ssl, APTR buff, int len );
void VSSL_SetTCPMode( int mode, APTR );
void VSSL_AddCertDir( APTR ctx, STRPTR dir );
int VSSL_GetVerifyResult( APTR ssl, char **errorp );
X509 *VSSL_GetPeerCertificate( APTR ssl );
void VSSL_X509_Free( X509 *cert );
STRPTR VSSL_X509_NameOneline( X509_NAME *name );
void VSSL_X509_FreeNameOneline( STRPTR name );
X509_NAME * VSSL_X509_get_subject_name( X509 *cert );
X509_NAME * VSSL_X509_get_issuer_name( X509 *cert );
ASN1_UTCTIME * VSSL_X509_get_notBefore( X509 *cert );
ASN1_UTCTIME * VSSL_X509_get_notAfter( X509 *cert );
int VSSL_WriteCertPEM( X509 *cert, STRPTR outfile );
X509 *VSSL_ReadCertPEM( STRPTR filename );
X509 *VSSL_ReadCertASN1( STRPTR filename );
void VSSL_ASN1_UTCTIME_sprint( char *to, ASN1_UTCTIME *tm );
ULONG VSSL_X509_NameHash( X509 *cert );
int VSSL_X509_HaveSubjectCert( APTR ctx, X509 *cert );
int VSSL_X509_fingerprint( X509 *cert, char *to );
void VSSL_X509_serialnumber( X509 *cert, char *to );
void VSSL_SetRandSeed( APTR buff, int len );
void VSSL_GetStats( APTR ctx, struct VSSL_CacheInfo *ci );
void VSSL_CTX_Set_Options( APTR ctx, ULONG options );
STRPTR VSSL_GetVersion( APTR ssl );
void VSSL_SetDefaultOptions( ULONG options );

