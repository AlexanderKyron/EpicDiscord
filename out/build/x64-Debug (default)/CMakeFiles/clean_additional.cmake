# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\DiscordClient_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\DiscordClient_autogen.dir\\ParseCache.txt"
  "DiscordClient_autogen"
  "_deps\\curl-build\\lib\\CMakeFiles\\libcurl_autogen.dir\\AutogenUsed.txt"
  "_deps\\curl-build\\lib\\CMakeFiles\\libcurl_autogen.dir\\ParseCache.txt"
  "_deps\\curl-build\\lib\\libcurl_autogen"
  "deps\\sleepy-discord\\deps\\cpr\\cpr\\CMakeFiles\\cpr_autogen.dir\\AutogenUsed.txt"
  "deps\\sleepy-discord\\deps\\cpr\\cpr\\CMakeFiles\\cpr_autogen.dir\\ParseCache.txt"
  "deps\\sleepy-discord\\deps\\cpr\\cpr\\cpr_autogen"
  "deps\\sleepy-discord\\sleepy_discord\\CMakeFiles\\sleepy-discord_autogen.dir\\AutogenUsed.txt"
  "deps\\sleepy-discord\\sleepy_discord\\CMakeFiles\\sleepy-discord_autogen.dir\\ParseCache.txt"
  "deps\\sleepy-discord\\sleepy_discord\\sleepy-discord_autogen"
  )
endif()
