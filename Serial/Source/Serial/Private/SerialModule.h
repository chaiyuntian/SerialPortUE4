#pragma once


class SerialModule : public IModuleInterface
{
public:
	SerialModule();
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};