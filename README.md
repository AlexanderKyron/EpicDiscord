# EpicDiscord
This project is not finished. It does not do anything right now. It is a skeleton UI.
## Goals
- Lightweight, cross-platform Discord client
- More efficient UI that sacrifices nice padding and flashy design for space and use efficiency
- Easy to use
- Privacy features inc. end-to-end encryption with keys negotiated out of band automatically, voice changer, etc
- Automation features allowing users to write custom scripts in Python (and eventually a node-based editor) to automate the editor (This is not self-botting as it is not abusing the API bot features on a user-account, it is simply automating the tasks of the client itself, behind the scenes but functionally identically to as if a user were performing them)
- Customizable UI styling and layout
- Entirely data-driven UI that never hides things unnecessarily - DMs always showing, servers, server folders, categories and channels shown in a hierarchical tree view
- Give users features reserved for bots, such as rich message formatting via embeds **(NOTE: Potentially against TOS, use at own risk, will include a large disclaimer if user is not logged in as a bot)**

## Building

Clone [Sleepy Discord](https://github.com/yourWaifu/sleepy-discord) into the deps folder and install OpenSSL/libssl. Run cmake, then compile it with GCC.
