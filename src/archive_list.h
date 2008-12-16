/* the Music Player Daemon (MPD)
 * Copyright (C) 2008 Viliam Mateicka <viliam.mateicka@gmail.com>
 * This project's homepage is: http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MPD_ARCHIVE_LIST_H
#define MPD_ARCHIVE_LIST_H

#include "archive_api.h"

#include <stdio.h>

struct archive_plugin;

/* interface for using plugins */

const struct archive_plugin *
archive_plugin_from_suffix(const char *suffix);

const struct archive_plugin *
archive_plugin_from_name(const char *name);

void archive_plugin_print_all_suffixes(FILE * fp);

/* this is where we "load" all the "plugins" ;-) */
void archive_plugin_init_all(void);

/* this is where we "unload" all the "plugins" */
void archive_plugin_deinit_all(void);

#endif
