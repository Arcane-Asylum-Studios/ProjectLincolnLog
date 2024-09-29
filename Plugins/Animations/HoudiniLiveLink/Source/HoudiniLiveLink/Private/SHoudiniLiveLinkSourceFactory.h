/*
* Copyright (c) <2020> Side Effects Software Inc.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice,
*    this list of conditions and the following disclaimer.
*
* 2. The name of Side Effects Software may not be used to endorse or
*    promote products derived from this software without specific prior
*    written permission.
*
* THIS SOFTWARE IS PROVIDED BY SIDE EFFECTS SOFTWARE "AS IS" AND ANY EXPRESS
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN
* NO EVENT SHALL SIDE EFFECTS SOFTWARE BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
* OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

#include "Widgets/SCompoundWidget.h"
#include "Input/Reply.h"
#include "Types/SlateEnums.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"
#include "Widgets/Input/SNumericEntryBox.h"

class SEditableTextBox;

class SHoudiniLiveLinkSourceFactory : public SCompoundWidget
{
	public:

		DECLARE_DELEGATE_ThreeParams(FOnOkClicked, FIPv4Endpoint, float, FString);

		SLATE_BEGIN_ARGS(SHoudiniLiveLinkSourceFactory){}
			SLATE_EVENT(FOnOkClicked, OnOkClicked)
		SLATE_END_ARGS()

		void Construct(const FArguments& Args);

	private:

		void OnEndpointChanged(const FText& NewValue, ETextCommit::Type);

		void OnNameChanged(const FText& NewValue, ETextCommit::Type);

		void SetRefreshRate(float InRefreshRate);
		TOptional<float> GetRefreshRate() const;

		FReply OnOkClicked();

		FOnOkClicked OkClicked;

		TWeakPtr<SEditableTextBox> PortEditabledText;
		TWeakPtr<SEditableTextBox> NameEditabledText;
		TWeakPtr<SNumericEntryBox<float>> NumericValue;

		float RefreshValue;

		FString SubjectName;
};