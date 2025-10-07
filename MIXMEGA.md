# Pokeemerald Mix and Mega

by ellabrella

This is the repo for a project that implements Mix and Mega in Pokeemerald, using RHH's pokeemerald-expansion, version 1.13.1, as a base.  It's free for anyone to use, modify, or republish.  To use in your hack, simply pull into your repo, resolve any merge conflicts, and enjoy!

Remember, to use Mega Evolution, you need a Mega Ring and a Mega Stone.  This repo also lifts the restriction on using Mega Evolution once per battle.

If you want to expand the data to include new mega stones, check out the instructions in include/mix_mega.h.

If you'd like to credit me, feel free to link to this page.

# Important info

### This is an incomplete implementation of Mix and Mega, there are features missing and it's been minimally tested!

Currently it lacks:

* Dragon Ascent
* Red and Blue Orbs
* All the other cool new mega stones Smogon added when I wasn't looking???
* Prevention of knocking off Mega Stones
* Form change rules (e.g. when Castform-Rain mega evolves, it becomes Mega Castform-Rain; officially it should revert to base Castform first)
* Any way to tell which mega stone a pokemon is using after it mega evolves

Additionally, Aggronite is using outdated functionality - it removes secondary typing rather than adding a steel type.

I originally wrote this code a few years ago and never finished nor published it.  Since then, pokeemerald-expansion has changed a lot, and I have been away from the pokemon romhacking scene.  I spent some time porting it over to the latest version of pokeemerald-expansion so that anyone who's interested can use it, or perhaps see my work and make a better version!

On a technical level, I would say this is not a very good implementation.  It's quite invasive to places where it really shouldn't be, such as the structure of pokemon data.  It doesn't include any adjustments to the automated battle testing, so it probably breaks that!  All in all it seems to work OK, but it's probably not going to play nice with other engine modifications.

I don't expect to address the missing features or to solve any issues reported to me.  I'm just not that interested in pokemon romhacking anymore.  Additionally, pokeemerald-expansion has gotten so much more complex.  It's incredibly impressive, but quite daunting to mod.

# Links

* pokeemerald-expansion: https://github.com/rh-hideout/pokeemerald-expansion
* Mix and Mega Smogon thread: https://www.smogon.com/forums/threads/mix-and-mega.3710921/