/* -*- mode: C; c-file-style: "gnu"; indent-tabs-mode: nil; -*-
 * apparmor.c  AppArmor security checks for D-Bus
 *
 * Authors: John Johansen <john.johansen@canonical.com>
 *          Tyler Hicks <tyhicks@canonical.com>
 * Based on: selinux.h by Matthew Rickard
 *
 * Licensed under the Academic Free License version 2.1
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

#ifndef BUS_APPARMOR_H
#define BUS_APPARMOR_H

#include <dbus/dbus.h>

void bus_apparmor_audit_init (void);
dbus_bool_t bus_apparmor_pre_init (void);
dbus_bool_t bus_apparmor_set_mode_from_config (const char *mode,
                                               DBusError *error);
dbus_bool_t bus_apparmor_full_init (DBusError *error);
void bus_apparmor_shutdown (void);
dbus_bool_t bus_apparmor_enabled (void);

#endif /* BUS_APPARMOR_H */
