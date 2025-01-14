/*
 * Copyright (C) 2025 ITlopa
 *
 * This file is part of ITlopa Store API.
 *
 * ITlopa Store API is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * ITlopa Store API is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
*/
#pragma once

typedef struct {
	const char* str;
} LastStored;

#ifdef _WIN32
#define UseStore(t) __declspec(dllexport) t
#else
#define UseStore(t) t
#endif

UseStore(LastStored) GetLastStored();

#define laststored GetLastStored()

UseStore(void) Store(const char *__str);