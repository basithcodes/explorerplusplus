// Copyright (C) Explorer++ Project
// SPDX-License-Identifier: GPL-3.0-only
// See LICENSE in the top level directory

#pragma once

#include "Navigator.h"

class BrowserPane;

// Each browser window contains one or more browser panes, with each pane containing a set of tabs.
class BrowserWindow : public Navigator
{
public:
	virtual ~BrowserWindow() = default;

	virtual BrowserPane *GetActivePane() const = 0;
};
