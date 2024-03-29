/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GDT.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majosue <majosue@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:00:40 by majosue           #+#    #+#             */
/*   Updated: 2023/02/02 13:18:09 by majosue          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GDT.h"

uint64_t g_table[7] __attribute__ ((section (".gdt"))) __attribute__ ((__used__))  = {
	0x0000000000000000,
	0x00CF9A000000FFFF,
	0x00CF92000000FFFF,
	0x00C0960000000000,
	0x00CFFA000000FFFF,
	0x00CFF2000000FFFF,
	0x00C0F60000000000
};

struct GDTR gdtr = {
	0x7 * 8 - 1,
	(uint32_t)g_table
};
