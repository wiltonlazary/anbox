/*
 * Copyright (C) 2018 Simon Fels <morphis@gravedo.de>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef ANBOX_CMDS_WAIT_READY_H_
#define ANBOX_CMDS_WAIT_READY_H_

#include <functional>
#include <iostream>
#include <memory>

#include "anbox/cli.h"

namespace anbox {
namespace cmds {
class WaitReady : public cli::CommandWithFlagsAndAction {
 public:
  WaitReady();

 private:
  bool use_system_dbus_ = false;
};
}  // namespace cmds
}  // namespace anbox

#endif
