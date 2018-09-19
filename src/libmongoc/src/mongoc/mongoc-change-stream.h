/*
 * Copyright 2017-present MongoDB, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if !defined(MONGOC_INSIDE) && !defined(MONGOC_COMPILATION)
#error "Only <mongoc/mongoc.h> can be included directly."
#endif

#ifndef MONGOC_CHANGE_STREAM_H
#define MONGOC_CHANGE_STREAM_H

#include <bson/bson.h>

#include "mongoc/mongoc-macros.h"

BSON_BEGIN_DECLS

typedef struct _mongoc_change_stream_t mongoc_change_stream_t;

MONGOC_EXPORT (void)
mongoc_change_stream_destroy (mongoc_change_stream_t *);

MONGOC_EXPORT (bool)
mongoc_change_stream_next (mongoc_change_stream_t *, const bson_t **);

MONGOC_EXPORT (bool)
mongoc_change_stream_error_document (const mongoc_change_stream_t *,
                                     bson_error_t *,
                                     const bson_t **);

BSON_END_DECLS

#endif /* MONGOC_CHANGE_STREAM_H */
