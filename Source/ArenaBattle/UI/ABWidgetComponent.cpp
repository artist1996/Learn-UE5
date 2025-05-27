// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/ABWidgetComponent.h"
#include "ABUserWidget.h"

void UABWidgetComponent::InitWidget()
{
	//위젯에 대한 인스턴스가 생성된 직후 호출된다. 그리고 위젯에 관련된 UI 요소들이 모두 준비가 완료되면 NativeConstruct 함수가 호출된다.
	Super::InitWidget();

	UABUserWidget* ABUserWidget = Cast<UABUserWidget>(GetWidget());
	if (ABUserWidget)
	{
		ABUserWidget->SetOwningActor(GetOwner());
	}
}
