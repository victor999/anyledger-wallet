#ifndef _UTILS_H_
#define _UTILS_H_
/* system includes */
/* local includes */
#include "helpers/uint256.h"


#ifdef  __cplusplus
extern "C" {
#endif

void printk_hex(const uint8_t *data, size_t data_len);
#define printk_hex_nl(data, len) printk_hex(data, len); printk("\n");
void printk_uint256(const uint256_t *v);
#ifdef __cplusplus
}
#endif

#endif /* _UTILS_H_ */

