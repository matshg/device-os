/*
 * Copyright (c) 2019 Particle Industries, Inc.  All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef CELLULAR_HAL_CELLULAR_GLOBAL_IDENTITY_H
#define CELLULAR_HAL_CELLULAR_GLOBAL_IDENTITY_H

#include <stdint.h>

/*!
 * \brief Cellular Global Identity (CGI)
 *
 * The Cellular Global Identity is a globally unique identifier for a Base Transceiver Station in
 * mobile phone networks. It consists of four parts: Mobile Country Code (MCC), Mobile Network Code
 * (MNC), Location Area Code (LAC) and Cell Identification (CI). It is an integral part of 3GPP
 * specifications for mobile networks, for example, for identifying individual base stations to
 * "handover" ongoing phone calls between separately controlled base stations, or between different
 * mobile technologies.
 */
typedef struct __attribute__((__packed__))
{
    uint16_t size; /*!< \c size is specified by the user application, to inform the device-os of the
                      amount of space allocated to the structure */
    uint16_t version;  /*!< \c version is specified by the device-os, to inform the user-application
                          of the version of the information returned */
    uint16_t reserved; /*!< \c reserved is allocated for future usage */
    uint16_t mobile_country_code; /*!< \c mobile_country_code consists of three decimal digits and
                                     identifies uniquely the country of domicile of the mobile
                                     subscription */
    uint16_t mobile_network_code; /*!< \c mobile_network_code consists of three decimal digits and
                                     identifies the home PLMN of the mobile subscription */
    uint16_t location_area_code;  /*!< \c location_area_code is a fixed length code (of 2 octets)
                                     identifying a location area within a PLMN */
    uint32_t cell_id; /*!< \c cell_id is of fixed length with 4 octets and it can be coded using a
                         full hexadecimal representation */
} CellularGlobalIdentity;

#endif // CELLULAR_HAL_CELLULAR_GLOBAL_IDENTITY_H
