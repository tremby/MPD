/*
 * Copyright 2003-2017 The Music Player Daemon Project
 * http://www.musicpd.org
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
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MPD_STORAGE_CONFIG_HXX
#define MPD_STORAGE_CONFIG_HXX

#include "check.h"
#include "Compiler.h"

class Storage;
class EventLoop;

/**
 * Read storage configuration settings and create a #Storage instance
 * from it.  Returns nullptr if no storage is configured.
 *
 * Throws #std::runtime_error on error.
 */
Storage *
CreateConfiguredStorage(EventLoop &event_loop);

/**
 * Returns true if there is configuration for a #Storage instance.
 */
gcc_const
bool
IsStorageConfigured();

#endif
