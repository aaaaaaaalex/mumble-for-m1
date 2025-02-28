// Copyright 2019-2022 The Mumble Developers. All rights reserved.
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file at the root of the
// Mumble source tree or at <https://www.mumble.info/LICENSE>.

#ifndef MUMBLE_MUMBLE_SCREEN_H
#define MUMBLE_MUMBLE_SCREEN_H

class QPoint;
class QScreen;
class QWidget;
class QWindow;

class Screen {
public:
	/// Inspired by https://phabricator.kde.org/D22379
	static QWindow *windowFromWidget(const QWidget &widget);
	static QScreen *screenFromWidget(const QWidget &widget);
	static QScreen *screenAt(const QPoint &point);
};

#endif
