/*
 * ascii_14_segment.h
 *
 *  Created on: Apr 1, 2016
 *      Author: Evan Tchelepi
 */


#ifndef ASCII_4_SEGMENT_H_
#define ASCII_4_SEGMENT_H_

//compiler.h

uint16_t ASCII_14_SEG[128] = {
		0,0,0,0,0,0,0,0,0,0,	/*0-9*/
		0,0,0,0,0,0,0,0,0,0,	/*10-19*/
		0,0,0,0,0,0,0,0,0,0, 	/*20-29*/
		0,0,0,0,0,0,0,0,0,0, 	/*30-39*/
		0,0,0,0,0,0,0,			/*40-47*/
		/*NUMBERS*/
		126,2060,438,414,460,474,506,10242,510,462, /*48-57 		Numbers 0-9*/
		0,0,0,0,0,0,0,			/*58-64*/
		/*CAPITOL LETTERS*/
		494,9502,114,9246,498,482,378,492,9234,60, /*65-74 		A to J*/
		6368,112,2668,4716,126,486,4222,4582,794,9218, /*75-84 	K to T*/
		124,18528,21612,23040,10752,18450,				/*85-90 U-Z*/
		0,0,0,0,0,0,			/*91-96*/
		446,4336,432,16668,242,226,798,488,8192,28,	/*97 -106 a to j*/
		15360,9216,8616,4256,440,2274,4550,160,794,240,	/*107-116 	k to t*/
		56,16416,20520,23040,1308,18450,				/*117-122 u-z*/
		0,0,0,0,0										/*123-127 u-z*/
		};
/*Lower Case Alphabet*/
//ascii_14_seg['A'] =
/*Upper Case Alphabet*/

/*Numbers*/
/*ASCII_14_SEG[0] = 126;
ASCII_14_SEG['1'] = 2050;
ASCII_14_SEG['2'] = 438;
ASCII_14_SEG['3'] = 414;
ASCII_14_SEG['4'] = 460;
ASCII_14_SEG['5'] = 90;
ASCII_14_SEG['6'] = 122;
ASCII_14_SEG['7'] = 10242;
ASCII_14_SEG['8'] = 510;
ASCII_14_SEG['9'] = 462;*/



#endif /* ASCII_4_SEGMENT_H_ */