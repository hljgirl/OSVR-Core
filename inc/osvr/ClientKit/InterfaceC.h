/** @file
    @brief Header

    Must be c-safe!

    @date 2014

    @author
    Sensics, Inc.
    <http://sensics.com/osvr>
*/

/*
// Copyright 2014 Sensics, Inc.
//
// All rights reserved.
//
// (Final version intended to be licensed under
// the Apache License, Version 2.0)
*/

#ifndef INCLUDED_InterfaceC_h_GUID_D90BBAA6_AD62_499D_C023_2F6ED8987C17
#define INCLUDED_InterfaceC_h_GUID_D90BBAA6_AD62_499D_C023_2F6ED8987C17

/* Internal Includes */
#include <osvr/ClientKit/Export.h>
#include <osvr/Util/APIBaseC.h>
#include <osvr/Util/ReturnCodesC.h>
#include <osvr/Util/AnnotationMacrosC.h>
#include <osvr/Util/ClientOpaqueTypesC.h>

/* Library/third-party includes */
/* none */

/* Standard includes */
/* none */

OSVR_EXTERN_C_BEGIN
/** @addtogroup ClientKit
@{
*/

/** @brief Get the interface associated with the given path.
    @param ctx Client context
    @param path A resource path (null-terminated string)
    @param[out] iface The interface object. May be freed when no longer needed,
   otherwise it will be freed when the context is closed.
*/
OSVR_CLIENTKIT_EXPORT OSVR_ReturnCode
osvrClientGetInterface(OSVR_ClientContext ctx, const char path[],
                       OSVR_ClientInterface *iface);

/** @brief Free an interface object before context closure.

    @param ctx Client context
    @param iface The interface object

    @returns OSVR_RETURN_SUCCESS unless a null context or interface was passed
   or the given interface was not found in the context (i.e. had already been
   freed)
*/
OSVR_CLIENTKIT_EXPORT OSVR_ReturnCode
osvrClientFreeInterface(OSVR_ClientContext ctx, OSVR_ClientInterface iface);

/** @} */
OSVR_EXTERN_C_END

#endif
