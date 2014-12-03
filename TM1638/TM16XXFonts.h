/*
TM16XXFonts.h - Font definition for TM16XX.

Copyright (C) 2011 Ricardo Batista (rjbatista <at> gmail <dot> com)

This program is free software: you can redistribute it and/or modify
it under the terms of the version 3 GNU General Public License as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.


The bits are displayed by mapping bellow
 -- 0 --
|       |
5       1
 -- 6 --
4       2
|       |
 -- 3 --  .7

*/

#ifndef TM16XXFonts_h
#define TM16XXFonts_h

// definition for standard hexadecimal numbers
const byte NUMBER_FONT[] = {
	0x3F, // 0
  0x06, // 1
  0x5B, // 2
  0x4F, // 3
  0x66, // 4
  0x6D, // 5
  0x7D, // 6
  0x07, // 7
  0x7F, // 8
  0x6F, // 9
  0x77, // A
  0x7C, // B
  0x39, // C
  0x5E, // D
  0x79, // E
  0x71  // F
};

const byte MINUS = 0x40;

// definition for error
const byte ERROR_DATA[] = {
	0x79, // E
  0x50, // r
  0x50, // r
  0x5C, // o
  0x50, // r
  0,
  0,
  0
};

// definition for the displayable ASCII chars
const byte FONT_DEFAULT[] = {
	0x0, // (32)  <space>
	0x86, // (33)	!
	0x22, // (34)	"
	0x7E, // (35)	#
	0x6D, // (36)	$
	0x0, // (37)	%
	0x0, // (38)	&
	0x2, // (39)	'
	0x30, // (40)	(
	0x6, // (41)	)
	0x63, // (42)	*
	0x0, // (43)	+
	0x4, // (44)	,
	0x40, // (45)	-
	0x80, // (46)	.
	0x52, // (47)	/
	0x3F, // (48)	0
	0x6, // (49)	1
	0x5B, // (50)	2
	0x4F, // (51)	3
	0x66, // (52)	4
	0x6D, // (53)	5
	0x7D, // (54)	6
	0x27, // (55)	7
	0x7F, // (56)	8
	0x6F, // (57)	9
	0x0, // (58)	:
	0x0, // (59)	;
	0x0, // (60)	<
	0x48, // (61)	=
	0x0, // (62)	>
	0x53, // (63)	?
	0x5F, // (64)	@
	0x77, // (65)	A
	0x7F, // (66)	B
	0x39, // (67)	C
	0x3F, // (68)	D
	0x79, // (69)	E
	0x71, // (70)	F
	0x3D, // (71)	G
	0x76, // (72)	H
	0x6, // (73)	I
	0x1F, // (74)	J
	0x69, // (75)	K
	0x38, // (76)	L
	0x15, // (77)	M
	0x37, // (78)	N
	0x3F, // (79)	O
	0x73, // (80)	P
	0x67, // (81)	Q
	0x31, // (82)	R
	0x6D , // (83)	S
	0x78, // (84)	T
	0x3E, // (85)	U
	0x2A, // (86)	V
	0x1D, // (87)	W
	0x76, // (88)	X
	0x6E, // (89)	Y
	0x5B, // (90)	Z
	0x39, // (91)	[
	0x64, // (92)	\ (this can't be the last char on a line, even in comment or it'll concat)
	0x0F, // (93)	]
	0x0, // (94)	^
	0x08, // (95)	_
	0x20, // (96)	`
	0x5F, // (97)	a
	0x7C, // (98)	b
	0x58, // (99)	c
	0x5E, // (100)	d
	0x7B, // (101)	e
	0x31, // (102)	f
	0x6F, // (103)	g
	0x74, // (104)	h
	0x4, // (105)	i
	0xE, // (106)	j
	0x75, // (107)	k
	0x30, // (108)	l
	0x55, // (109)	m
	0x54, // (110)	n
	0x5C, // (111)	o
	0x73, // (112)	p
	0x67, // (113)	q
	0x50, // (114)	r
	0x6D, // (115)	s
	0x78, // (116)	t
	0x1C, // (117)	u
	0x2A, // (118)	v
	0x1D, // (119)	w
	0x76, // (120)	x
	0x6E, // (121)	y
	0x47, // (122)	z
	0x46, // (123)	{
	0x6, // (124)	|
	0x70, // (125)	}
	0x1, // (126)	~
};

#endif
