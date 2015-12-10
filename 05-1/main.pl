#/usr/bin/perl

use strict;
use warnings;

open my $fh, '<', 'input.txt'
    or die "Can't read input.txt";

while (<$fh>) {
    chomp;
    my @count = $_ =~ /[aeiou]/g;
    if ( scalar @count >= 3 ) { # Check for vowels
        if ( $_ =~ /(\w)\1/ ) { # Check for repeat letters
            if ( not $_ =~ /(ab|cd|pq|xy)/ ) { # Check for 'bad' pairs.
                print $_,"\n";
            }
        }
    }
}
