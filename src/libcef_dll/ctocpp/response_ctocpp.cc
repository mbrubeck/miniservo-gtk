// Copyright (c) 2014 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/ctocpp/response_ctocpp.h"
#include "libcef_dll/transfer_util.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefResponse> CefResponse::Create() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_response_t* _retval = cef_response_create();

  // Return type: refptr_same
  return CefResponseCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

bool CefResponseCToCpp::IsReadOnly() {
  if (CEF_MEMBER_MISSING(struct_, is_read_only))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->is_read_only(struct_);

  // Return type: bool
  return _retval?true:false;
}

int CefResponseCToCpp::GetStatus() {
  if (CEF_MEMBER_MISSING(struct_, get_status))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = struct_->get_status(struct_);

  // Return type: simple
  return _retval;
}

void CefResponseCToCpp::SetStatus(int status) {
  if (CEF_MEMBER_MISSING(struct_, set_status))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->set_status(struct_,
      status);
}

CefString CefResponseCToCpp::GetStatusText() {
  if (CEF_MEMBER_MISSING(struct_, get_status_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_status_text(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefResponseCToCpp::SetStatusText(const CefString& statusText) {
  if (CEF_MEMBER_MISSING(struct_, set_status_text))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: statusText; type: string_byref_const
  DCHECK(!statusText.empty());
  if (statusText.empty())
    return;

  // Execute
  struct_->set_status_text(struct_,
      statusText.GetStruct());
}

CefString CefResponseCToCpp::GetMimeType() {
  if (CEF_MEMBER_MISSING(struct_, get_mime_type))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = struct_->get_mime_type(struct_);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefResponseCToCpp::SetMimeType(const CefString& mimeType) {
  if (CEF_MEMBER_MISSING(struct_, set_mime_type))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: mimeType; type: string_byref_const
  DCHECK(!mimeType.empty());
  if (mimeType.empty())
    return;

  // Execute
  struct_->set_mime_type(struct_,
      mimeType.GetStruct());
}

CefString CefResponseCToCpp::GetHeader(const CefString& name) {
  if (CEF_MEMBER_MISSING(struct_, get_header))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty())
    return CefString();

  // Execute
  cef_string_userfree_t _retval = struct_->get_header(struct_,
      name.GetStruct());

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefResponseCToCpp::GetHeaderMap(HeaderMap& headerMap) {
  if (CEF_MEMBER_MISSING(struct_, get_header_map))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: headerMap; type: string_map_multi_byref
  cef_string_multimap_t headerMapMultimap = cef_string_multimap_alloc();
  DCHECK(headerMapMultimap);
  if (headerMapMultimap)
    transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  struct_->get_header_map(struct_,
      headerMapMultimap);

  // Restore param:headerMap; type: string_map_multi_byref
  if (headerMapMultimap) {
    headerMap.clear();
    transfer_string_multimap_contents(headerMapMultimap, headerMap);
    cef_string_multimap_free(headerMapMultimap);
  }
}

void CefResponseCToCpp::SetHeaderMap(const HeaderMap& headerMap) {
  if (CEF_MEMBER_MISSING(struct_, set_header_map))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: headerMap; type: string_map_multi_byref_const
  cef_string_multimap_t headerMapMultimap = cef_string_multimap_alloc();
  DCHECK(headerMapMultimap);
  if (headerMapMultimap)
    transfer_string_multimap_contents(headerMap, headerMapMultimap);

  // Execute
  struct_->set_header_map(struct_,
      headerMapMultimap);

  // Restore param:headerMap; type: string_map_multi_byref_const
  if (headerMapMultimap)
    cef_string_multimap_free(headerMapMultimap);
}


#ifndef NDEBUG
template<> base::AtomicRefCount CefCToCpp<CefResponseCToCpp, CefResponse,
    cef_response_t>::DebugObjCt = 0;
#endif

