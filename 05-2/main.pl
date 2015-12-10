#/usr/bin/perl

use strict;
use warnings;

open my $fh, '<', 'input.txt'
    or die "Can't read input.txt";

while (<$fh>) {
    chomp;
    if ( $_ =~ /(\w\w).*\1/ ) { # Check for vowels
        if ( $_ =~ /(\w)\w\1/ ) { # Check for 'bad' pairs.
            print $_,"\n";
        }
    }
}
