/*
 * endian.h
 *
 *  Created on: Dec 21, 2022
 *      Author: roy.ratcliffe
 */

#ifndef INC_ENDIAN_H_
#define INC_ENDIAN_H_

#include <machine/endian.h>

#define htobe32(x) __htonl(x)
#define htobe16(x) __htons(x)
#define be16toh(x) __ntohs(x)
#define be32toh(x) __ntohl(x)

#if _BYTE_ORDER == _LITTLE_ENDIAN
#define htobe64(x) __bswap64(x)
#define be64toh(x) __bswap64(x)
#else
#define htobe64(x) (x)
#define be64toh(x) (x)
#endif

#endif /* INC_ENDIAN_H_ */
