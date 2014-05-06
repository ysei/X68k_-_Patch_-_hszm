
	.include	doscall.mac
	.include	iocscall.mac
	.include	naw.mac

_画面x		equ	240
_画面y		equ	320
_実x0		equ	256		*GW仮想画面の(256,)がGWの(0,)なの
_実y0		equ	256		*　　 〃 　　(,256)　〃　(,0) 〃
_offset_x	equ	(336-_画面x)/2	*128+64
_offset_y	equ	(448-_画面y)/2+13	*128+40	*48
_Jx_limit1	equ	_実x0
_Jx_limit2	equ	_実x0+_画面x-32
_Jy_limit1	equ	_実y0
_Jy_limit2	equ	_実y0+_画面y-32
_地形pcg_data	equ	$c80000


	.globl	__x0
	.globl	__y0
	.globl	__no_縦scroll_flag
	.globl	__on_the_GND_flag
	.globl	__ptr_地形table
	.globl	__num__GNDx_scroll
	.globl	__2_count

	.globl	__d24_1		*$9c00	*967a0+ 9C00= A03A0
	.globl	__地形table＆	*.ds.b	$10000	;data25
	.globl	__地形pcg_data	*.ds.b	$80000	;data26
	.globl	__chr_data1	*.ds.b	131072	;data28
	.globl	__chr_data2	*.ds.b	131072	;data29

