/*
 * Part of WCM Commander GitHub Edition
 * https://github.com/corporateshark/WCMCommander
 * wcm@linderdaum.com
 */

#pragma once

#include "ncdialogs.h"

bool SelectCharset( NCDialogParent* parent, int* pCharsetId, int currentId = 0 );
bool SelectOperCharset( NCDialogParent* parent, int* pCharsetId, int currentId = 0 );

void InitOperCharsets();
int GetFirstOperCharsetId();
int GetNextOperCharsetId( int id );
