/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "util.h"

void vendor_load_properties()
{
	char bootloader[PROP_VALUE_MAX];

	property_get("ro.bootloader", bootloader);

	if (strstr(bootloader, "N930G")) {
		/* India */
		property_set("ro.product.model", "SM-N930G");
		property_set("ro.product.name", "graceltedt");
	} else if (strstr(bootloader, "N930K")) {
		/* Olleh (KT) */
		property_set("ro.product.model", "SM-N930K");
		property_set("ro.product.name", "graceltektt");
	} else if (strstr(bootloader, "N930L")) {
		/* LG Uplus */
		property_set("ro.product.model", "SM-N930L");
		property_set("ro.product.name", "graceltelgt");
	} else if (strstr(bootloader, "N930S")) {
		/* SK Telecom */
		property_set("ro.product.model", "SM-N930S");
		property_set("ro.product.name", "gracelteskt");
	} else if (strstr(bootloader, "N9308")) {
		/* Taiwan */
		property_set("ro.product.model", "SM-N9308");
		property_set("ro.product.name", "graceltezt");
	} else if (strstr(bootloader, "N9309")) {
		/* China */
		property_set("ro.product.model", "SM-N9309");
		property_set("ro.product.name", "gracelteke");
	} else if (strstr(bootloader, "N930X")) {
		/* store model / prerelease */
		property_set("ro.product.model", "SM-N930X");
		property_set("ro.product.name", "graceltexx");
	} else if (strstr(bootloader, "N930FD")) {
		/* international duos */
		property_set("ro.product.model", "SM-N930FD");
		property_set("ro.product.name", "graceltexx");
	} else {
		/* all other variants become international */
		property_set("ro.product.model", "SM-N930F");
		property_set("ro.product.name", "graceltexx");
	}
	property_set("ro.product.device", "gracelte");
}
