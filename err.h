#ifndef ERR_H
#define ERR_H

#define RET_ERR(__err_msg__) { err_cat(__err_msg__); return eERR; }
#define RET_OK { return eOK; }
#define TRY(__foo__) { if ((__foo__)!=eOK) { RET_ERR(""); } }

typedef enum ret_e {
	eOK=0,
	eERR=-1
} ret_e;

const char*err_get();
void err_cat(const char*);

#endif
