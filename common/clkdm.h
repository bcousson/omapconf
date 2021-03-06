/*
 *
 * @Component			OMAPCONF
 * @Filename			clkdm.h
 * @Description			Clock Domain Definitions & Functions
 * @Author			Patrick Titiano (p-titiano@ti.com)
 * @Date			2006
 * @Copyright			Texas Instruments Incorporated
 *
 *
 * Copyright (C) 2011 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


#ifndef __CLKDM_H__
#define __CLKDM_H__


#include <reg.h>


#define CLKDM_CTRL_MODE_MAX_NAME_LENGTH		24
#define CLKDM_STATUS_MAX_NAME_LENGTH		8


typedef enum {
	CLKM_NO_SLEEP_MODE = 0,
	CLKM_SW_SLEEP_MODE = 1,
	CLKM_SW_WKUP_MODE = 2,
	CLKM_HW_AUTO_MODE = 3,
	CLKM_CTRL_MODE_MAX
} clkdm_ctrl_mode;


typedef enum {
	CLKDM_GATED = 0,
	CLKDM_RUNNING = 1,
	CLKDM_STATUS_MAX
} clkdm_status;


clkdm_status clkdm_status_get(reg *cm_clkstctrl);
const char *clkdm_status_name_get(clkdm_status st);
clkdm_ctrl_mode clkdm_ctrl_mode_get(reg *cm_clkstctrl);
const char *clkdm_ctrl_mode_name_get(clkdm_ctrl_mode mode);


#endif
