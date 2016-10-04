/*
 * Copyright (C) 2016 Mario Cianciolo <mr.udda@gmail.com>
 *                    The Free Software Foundation
 *
 * This file is part of multiload-ng.
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
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */


#ifndef __LOAD_GRAPH_H__
#define __LOAD_GRAPH_H__

#include "multiload.h"


G_BEGIN_DECLS

G_GNUC_INTERNAL LoadGraph*
load_graph_new (MultiloadPlugin *ma, guint id);
G_GNUC_INTERNAL void
load_graph_resize (LoadGraph *g);
G_GNUC_INTERNAL void
load_graph_start (LoadGraph *g);
G_GNUC_INTERNAL void
load_graph_stop (LoadGraph *g);
G_GNUC_INTERNAL void
load_graph_unalloc (LoadGraph *g);
G_GNUC_INTERNAL void
load_graph_cairo_set_gradient(cairo_t *cr, double width, double height, int direction, GdkRGBA *a, GdkRGBA *b);

G_END_DECLS

#endif /* __LOAD_GRAPH_H__ */
