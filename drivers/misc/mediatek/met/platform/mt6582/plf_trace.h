/*
* Copyright (C) 2011-2014 MediaTek Inc.
* 
* This program is free software: you can redistribute it and/or modify it under the terms of the 
* GNU General Public License version 2 as published by the Free Software Foundation.
* 
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _PLF_TRACE_H_
#define _PLF_TRACE_H_

void ms_emi(unsigned long long timestamp, unsigned char cnt, unsigned int *value);
void ms_smi(unsigned long long timestamp, unsigned char cnt, unsigned int *value);
void ms_smit(unsigned long long timestamp, unsigned char cnt, unsigned int *value);

void ms_th(unsigned long long timestamp, unsigned char cnt, unsigned int *value);
void ms_dramc(unsigned long long timestamp, unsigned char cnt, unsigned int *value);

#endif // _PLF_TRACE_H_
