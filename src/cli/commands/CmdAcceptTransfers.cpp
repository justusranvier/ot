// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "CmdAcceptTransfers.hpp"

#include <opentxs/opentxs.hpp>

#include <stdint.h>
#include <string>

using namespace opentxs;
using namespace std;

CmdAcceptTransfers::CmdAcceptTransfers()
{
    command = "accepttransfers";
    args[0] = "--myacct <account>";
    args[1] = "[--indices <indices|all>]";
    category = catAccounts;
    help = "Accept all incoming transfers in myacct's inbox.";
    usage = "Omitting --indices is the same as specifying --indices all.";
}

CmdAcceptTransfers::~CmdAcceptTransfers() {}

int32_t CmdAcceptTransfers::runWithOptions()
{
    return run(getOption("myacct"), getOption("indices"));
}

int32_t CmdAcceptTransfers::run(string myacct, string indices)
{
    if (!checkAccount("myacct", myacct)) { return -1; }

    if ("" != indices && !checkIndices("indices", indices)) { return -1; }

    return acceptFromInbox(myacct, indices, opentxs::cli::RecordList::typeTransfers);
}
