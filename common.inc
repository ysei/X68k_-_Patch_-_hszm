
	.include	doscall.mac
	.include	iocscall.mac
	.include	naw.mac

_���x		equ	240
_���y		equ	320
_��x0		equ	256		*GW���z��ʂ�(256,)��GW��(0,)�Ȃ�
_��y0		equ	256		*�@�@ �V �@�@(,256)�@�V�@(,0) �V
_offset_x	equ	(336-_���x)/2	*128+64
_offset_y	equ	(448-_���y)/2+13	*128+40	*48
_Jx_limit1	equ	_��x0
_Jx_limit2	equ	_��x0+_���x-32
_Jy_limit1	equ	_��y0
_Jy_limit2	equ	_��y0+_���y-32
_�n�`pcg_data	equ	$c80000


	.globl	__x0
	.globl	__y0
	.globl	__no_�cscroll_flag
	.globl	__on_the_GND_flag
	.globl	__ptr_�n�`table
	.globl	__num__GNDx_scroll
	.globl	__2_count

	.globl	__d24_1		*$9c00	*967a0+ 9C00= A03A0
	.globl	__�n�`table��	*.ds.b	$10000	;data25
	.globl	__�n�`pcg_data	*.ds.b	$80000	;data26
	.globl	__chr_data1	*.ds.b	131072	;data28
	.globl	__chr_data2	*.ds.b	131072	;data29

