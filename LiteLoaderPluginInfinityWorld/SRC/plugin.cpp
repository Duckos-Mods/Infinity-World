/**
 * @file plugin.cpp
 * @brief The main file of the plugin
 */

#include <string>
#include "MainApp\InfinityWorld.h"
#include <llapi/LoggerAPI.h>
#include "version.h"

 // We recommend using the global logger.
 // extern Logger logger;

/**
 * @brief The entrypoint of the plugin. DO NOT remove or rename this function.
 *
 */
void PluginInit()
{

	auto* iw = new InfinityWorld();
	iw->Init();
}